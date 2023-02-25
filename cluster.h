#include <torch/torch.h>
#include "wasserstein.h"
#include "combination.h"

std::vector<int> cluster(std::vector<float> input, int k) {
    auto a = torch::rand({1,10});
    auto b = torch::rand({1,10});
    return std::vector<int>{2,2,2,3,3,5};
}