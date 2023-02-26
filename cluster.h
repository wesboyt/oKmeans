#include <torch/torch.h>
#include "wasserstein.h"
//#include "combination.h"
#include <algorithm>
#include <random>

std::vector<int> cluster(std::vector<float> input, int k) {
    auto base = torch::tensor(input.data());
    std::vector<int> ic = std::vector<int>(input.size());
    for(int i = 0; i < input.size(); i++){
        ic[i] = i;
    }
    //auto kCombos = combination(ic, k - 1);
    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };

    float minD = std::numeric_limits<float>::max();
    std::vector<int> best;
    torch::Tensor adjusted = torch::zeros({1, (int)input.size()});

    for(int l = 0; l < 10000; ++l) {
        std::shuffle(ic.begin(), ic.end(), rng);
        auto indexes = std::vector<int>(ic.begin(), ic.begin() + (k - 1));
        std::sort(indexes.begin(), indexes.end());

        float adjWeight = std::reduce(input.begin(), input.begin() + indexes[0]) / indexes[0];
        for(int j = 0; j < indexes[0]; ++j) {
            adjusted[j = adjWeight];
        }

        for(int i = 1; i < k - 1; ++i) {
            adjWeight = std::reduce(input.begin() + indexes[i-1], input.begin() + indexes[i]) / (indexes[i] - indexes[i-1]);
            for(int j = indexes[i-1]; j < indexes[i]; ++j) {
                adjusted[j = adjWeight];
            }
        }

        adjWeight = std::reduce(input.begin() + indexes[k - 1], input.end()) / (indexes[k - 2] - indexes[k - 1]);
        for(int j = indexes[k - 2]; j < indexes[k - 1]; ++j) {
            adjusted[j = adjWeight];
        }

        float d = distance(base, adjusted, 1).item<float>();
        if(d < minD){
            minD = d;
            best = indexes;
            std::cout << "Distance: " << d  << ", Indexes: "<< indexes << std::endl;
        }
    }
    return best;
}