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
    torch::Tensor adjusted = torch::zeros({(int)input.size()});

    for(int l = 0; l < 10000; ++l) {
        std::shuffle(ic.begin(), ic.end(), rng);
        auto indexes = std::vector<int>(ic.begin(), ic.begin() + (k));
        std::sort(indexes.begin(), indexes.end());

        float adjWeight = std::accumulate(input.begin(), input.begin() + indexes[0],0.0) / (indexes[0] + 1);
        for(int j = 0; j < indexes[0]; ++j) {
            adjusted[j] = adjWeight;
        }

        for(int i = 1; i < k - 1; ++i) {
            adjWeight = std::accumulate(input.begin() + indexes[i-1], input.begin() + indexes[i], 0.0) / ((indexes[i] - indexes[i-1]) + 1);

            for(int j = indexes[i-1]; j < indexes[i]; ++j) {
                adjusted[j] = adjWeight;
            }
        }

        adjWeight = std::accumulate(input.begin() + indexes[k - 1], input.end(), 0.0) / ((indexes[k - 1] - indexes[k - 2]) + 1);

        for(int j = indexes[k - 1]; j < input.size(); ++j) {
            adjusted[j] = adjWeight;
        }

        float d = distance(base, adjusted, 1).item<float>();
        if(d < minD) {
            minD = d;
            best = indexes;
            std::cout << "Distance: " << d  << ", Indexes: "<< indexes << std::endl;
        }
    }
    return best;
}