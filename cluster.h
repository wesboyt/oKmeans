#include <torch/torch.h>
#include "wasserstein.h"
#include "combination.h"

std::vector<int> cluster(std::vector<float> input, int k) {
    std::vector<int> basis = std::vector<int>(input.size());
    auto combos = combination(basis, k);
    auto a = torch::rand({1,10});
    auto b = torch::rand({1,10});
    return std::vector<int>{2,2,2,3,3,5};
}