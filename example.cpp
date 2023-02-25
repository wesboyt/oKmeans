#include <vector>
#include <random>
#include "cluster.h"


int main() {
    int k = 3;
    std::vector<float> input{30, 10, 15, 1, 60, 9};
    std::vector<int> remap = cluster(input, k);
    std::map<int,std::set<int>> clusters;
    for(int i = 0; i < remap.size(); ++i) {
        int index = remap[i];
        if(clusters.contains(index)){
            clusters[index].insert(i);
        } else {
            clusters[index] = {i};
        }
    }
    std::cout << clusters << std::endl;
}