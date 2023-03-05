#include <vector>
#include <numeric>
#include <cstdlib>
#include <iostream>

std::vector<float> normalize(std::vector<float> input) {
    float ttl = reduce(input.begin(), input.end());
    std::vector<float> output = std::vector<float>(input.size());
    for(int i = 0; i < input.size(); ++i) {
        output[i] = (input[i] / ttl) + 1e-14;
    }
    return output;
}

float distance(std::vector<float> a, std::vector<float> b) {
    auto aa = normalize(a);
    auto bb = normalize(b);
    std::vector<float> apSum = std::vector<float>(a.size());
    std::vector<float> bpSum = std::vector<float>(a.size());
    std::partial_sum(aa.begin(), aa.end(), apSum.begin());
    std::partial_sum(bb.begin(), bb.end(), bpSum.begin());
    std::vector<float> result = std::vector<float>(a.size());
    std::transform(apSum.begin(), apSum.end(), bpSum.begin(), result.begin(), std::minus<float>());
    std::transform(result.begin(), result.end(), result.begin(), static_cast<float (*)(float)>(&std::abs));
    return std::reduce(result.begin(), result.end());
}
