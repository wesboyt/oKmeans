#include <torch/torch.h>
#include "1dEmd.h"
#include <algorithm>
#include <random>
#include <limits>
#include "combination.h"

std::vector<float> buildAdjusted(std::vector<int> indexes, std::vector<float> input, int k) {
    int length = indexes[0] + 1;
    int start = 0;
    float adjWeight = std::reduce(input.begin() + start, input.begin() + length) / length;
    std::vector<float> adjusted = std::vector<float>();
    adjusted.insert(adjusted.end(),length, adjWeight);
    for(int i = 1; i < k; ++i) {
        start = indexes[i-1] + 1;
        length = indexes[i] - indexes[i-1];
        adjWeight = std::reduce(input.begin() + start, input.begin() + start + length) / (length);
        adjusted.insert(adjusted.end(),length, adjWeight);
    }
    start = indexes[k - 1] + 1;
    adjWeight = std::reduce(input.begin() + start, input.end()) / (input.size() - start);
    length = input.size() - start;
    adjusted.insert(adjusted.end(),length, adjWeight);
    return adjusted;
}

std::vector<int> cluster(std::vector<float> input, int k) {
    k = k - 1;

    std::vector<int> ic = std::vector<int>(input.size());
    for(int i = 0; i < input.size(); ++i){
        ic[i] = i;
    }

    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };
    float minD = std::numeric_limits<float>::max();
    std::vector<int> best;
    std::vector<float> distances = std::vector<float>(input.size());
    for(int i = 0; i < input.size(); ++i) {
        distances[i] = distance(input, buildAdjusted({i}, input, 1));
    }

    std::vector<int> viableIndexes;
    float lastDistance = std::numeric_limits<float>::max();
    int l = input.size() - 1;
    float thisDistance;
    for(int i = 0; i < l; ++i) {
        thisDistance = distances[i];
        if(thisDistance < lastDistance) {
            if(distances[i + 1] > thisDistance) {
                viableIndexes.emplace_back(i);
            }
        }
        lastDistance = thisDistance;

    }

    if(distances[l] < lastDistance) {
        viableIndexes.emplace_back(l);
    }

    for(int l = 0; l < 10000000; ++l) {
        std::shuffle(viableIndexes.begin(), viableIndexes.end(), rng);
        auto indexes = std::vector<int>(viableIndexes.begin(), viableIndexes.begin() + k);
        std::sort(indexes.begin(), indexes.end());
        float d = distance(input, buildAdjusted(indexes, input, k));
        if(d < minD) {
            minD = d;
            best = indexes;
            std::cout << "Distance: " << d << ", Indexes: "<< indexes << std::endl;
        }
    }

    return best;
}