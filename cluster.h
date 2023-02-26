#include <torch/torch.h>
#include "wasserstein.h"
#include <algorithm>
#include <random>

std::vector<int> cluster(std::vector<float> input, int k) {
    k = k - 1;
    auto base = torch::zeros(input.size());
    for(int i = 0; i < input.size(); ++i) {
        base[i] = input[i];
    }

    std::vector<int> ic = std::vector<int>(input.size());
    for(int i = 0; i < input.size(); i++){
        ic[i] = i;
    }

    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };

    float minD = std::numeric_limits<float>::max();
    std::vector<int> best;
    auto adjusted = torch::zeros(input.size());

    for(int l = 0; l < 1000000; ++l) {
        std::shuffle(ic.begin(), ic.end(), rng);
        auto indexes = std::vector<int>(ic.begin(), ic.begin() + k);
        std::sort(indexes.begin(), indexes.end());
        int length = indexes[0] + 1;
        int start = 0;
        float adjWeight = std::reduce(input.begin() + start, input.begin() + length) / length;
        for(int j = 0; j <= indexes[0]; ++j) {
            adjusted[j] = adjWeight;
        }

        for(int i = 1; i < k; ++i) {
            start = indexes[i-1] + 1;
            length = indexes[i] - indexes[i-1];
            adjWeight = std::reduce(input.begin() + start, input.begin() + start + length) / (length);

            for(int j = indexes[i-1] + 1; j <= indexes[i]; ++j) {
                adjusted[j] = adjWeight;
            }
        }
        start = indexes[k - 1] + 1;
        adjWeight = std::reduce(input.begin() + start, input.end()) / (input.size() - start);

        for(int j = indexes[k - 1] + 1; j < input.size(); ++j) {
            adjusted[j] = adjWeight;
        }

        float d = distance(base, adjusted, 1).item<float>();
        if(d < minD) {
            minD = d;
            best = indexes;
            std::cout << "Distance: " << d  << ", Indexes: "<< indexes << std::endl;
            //std::cout << adjusted << std::endl;
        }
    }
    return best;
}