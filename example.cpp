#include <vector>
#include <random>
#include "cluster.h"


int main() {
    int k = 40;
    std::vector<float> input{326340, 326340, 326340, 326340, 326340, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 326340, 326340, 326340, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 979020, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 1631700, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 326340, 326340, 326340, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 979020, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 1631700, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 1958040, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 1631700, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 2937060, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 326340, 326340, 326340, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 979020, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 1631700, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 1958040, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 1631700, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 2937060, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 3263400, 326340, 326340, 652680, 326340, 326340, 979020, 326340, 979020, 1631700, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 2937060, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4568760, 326340, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4895100, 326340, 979020, 1958040, 3263400, 4895100, 326340, 326340, 326340, 652680, 326340, 979020, 326340, 979020, 979020, 326340, 652680, 326340, 979020, 326340, 979020, 1631700, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 1958040, 326340, 652680, 326340, 979020, 326340, 979020, 1631700, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 2937060, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 3263400, 326340, 652680, 326340, 979020, 326340, 979020, 1631700, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 2937060, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4568760, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4895100, 326340, 979020, 1958040, 3263400, 4895100, 4895100, 326340, 652680, 326340, 979020, 326340, 979020, 1631700, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 2937060, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4568760, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4895100, 326340, 979020, 1958040, 3263400, 4895100, 6526800, 326340, 979020, 326340, 979020, 1958040, 326340, 979020, 1958040, 3263400, 326340, 979020, 1958040, 3263400, 4895100, 326340, 979020, 1958040, 3263400, 4895100, 6853140, 326340, 979020, 1958040, 3263400, 4895100, 6853140, 124740, 249480, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 374220, 374220, 748440, 374220, 748440, 1247400, 374220, 748440, 1247400, 1871100, 374220, 748440, 1247400, 1871100, 2619540, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 249480, 124740, 249480, 124740, 374220, 623700, 124740, 249480, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 249480, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 249480, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 249480, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 249480, 374220, 748440, 374220, 748440, 1247400, 374220, 748440, 1247400, 1871100, 374220, 748440, 1247400, 1871100, 2619540, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 124740, 249480, 124740, 374220, 623700, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 249480, 374220, 623700, 374220, 748440, 1247400, 374220, 748440, 1247400, 1871100, 374220, 748440, 1247400, 1871100, 2619540, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 124740, 249480, 124740, 374220, 374220, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 249480, 374220, 623700, 374220, 748440, 1122660, 374220, 748440, 1247400, 1871100, 374220, 748440, 1247400, 1871100, 2619540, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 124740, 249480, 124740, 374220, 374220, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 748440, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 124740, 124740, 124740, 249480, 124740, 374220, 374220, 124740, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 748440, 124740, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1247400, 124740, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 249480, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 124740, 124740, 124740, 374220, 124740, 374220, 374220, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 748440, 748440, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1247400, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 1871100, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 249480, 124740, 124740, 374220, 124740, 374220, 374220, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 748440, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1247400, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 1871100, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 2619540, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 4365900, 124740, 124740, 249480, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 748440, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1247400, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 1871100, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 2619540, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 3492720, 124740, 124740, 249480, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1247400, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 1871100, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 2619540, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 3492720, 124740, 124740, 249480, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 1871100, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 2619540, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 3492720, 124740, 124740, 249480, 124740, 124740, 374220, 124740, 374220, 623700, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 2619540, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 3492720, 124740, 249480, 124740, 374220, 124740, 374220, 623700, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1122660, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1746360, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2494800, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3367980, 124740, 374220, 124740, 374220, 748440, 124740, 374220, 748440, 1247400, 124740, 374220, 748440, 1247400, 1871100, 124740, 374220, 748440, 1247400, 1871100, 2619540, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 124740, 374220, 748440, 1247400, 1871100, 2619540, 3492720, 3492720, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2095632, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2095632, 18144, 18144, 113400, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2113776, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2095632, 18144, 18144, 113400, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2113776, 36288, 36288, 131544, 274428, 512568, 750708, 1036476, 1369872, 1750896, 2131920, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 18144, 113400, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 36288, 131544, 274428, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 72576, 149688, 292572, 483084, 768852, 1054620, 1388016, 1769040, 2197692, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 113400, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 131544, 274428, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 149688, 292572, 483084, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 204120, 310716, 501228, 739368, 1072764, 1406160, 1787184, 2215836, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 179172, 274428, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 197316, 292572, 483084, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 310716, 501228, 739368, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 383292, 519372, 757512, 1043280, 1424304, 1805328, 2233980, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 179172, 322056, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 197316, 340200, 483084, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 358344, 501228, 739368, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 430920, 519372, 757512, 1043280, 1424304, 1805328, 2233980, 36288, 120204, 251748, 430920, 610092, 775656, 1061424, 1394820, 1823472, 2252124, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 179172, 322056, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 197316, 340200, 530712, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 358344, 548856, 739368, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 430920, 567000, 757512, 1043280, 1424304, 1805328, 2233980, 36288, 120204, 251748, 430920, 657720, 775656, 1061424, 1394820, 1823472, 2252124, 36288, 120204, 251748, 430920, 657720, 884520, 1079568, 1412964, 1793988, 2270268, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 179172, 322056, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 197316, 340200, 530712, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 358344, 548856, 786996, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 430920, 567000, 805140, 1043280, 1424304, 1805328, 2233980, 36288, 120204, 251748, 430920, 657720, 823284, 1061424, 1394820, 1823472, 2252124, 36288, 120204, 251748, 430920, 657720, 932148, 1079568, 1412964, 1793988, 2270268, 36288, 120204, 251748, 430920, 657720, 932148, 1206576, 1431108, 1812132, 2240784, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 179172, 322056, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 197316, 340200, 530712, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 358344, 548856, 786996, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 430920, 567000, 805140, 1090908, 1424304, 1805328, 2233980, 36288, 120204, 251748, 430920, 657720, 823284, 1109052, 1394820, 1823472, 2252124, 36288, 120204, 251748, 430920, 657720, 932148, 1127196, 1412964, 1793988, 2270268, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1431108, 1812132, 2240784, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1576260, 1830276, 2258928, 47628, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 65772, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 83916, 179172, 322056, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 120204, 197316, 340200, 530712, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 358344, 548856, 786996, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 430920, 567000, 805140, 1090908, 1424304, 1805328, 2233980, 36288, 120204, 251748, 430920, 657720, 823284, 1109052, 1442448, 1823472, 2252124, 36288, 120204, 251748, 430920, 657720, 932148, 1127196, 1460592, 1793988, 2270268, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1478736, 1812132, 2240784, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1623888, 1830276, 2258928, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1623888, 1993572, 2277072, 142884, 285768, 476280, 714420, 1000188, 1333584, 1714608, 2143260, 18144, 18144, 161028, 303912, 494424, 732564, 1018332, 1351728, 1732752, 2161404, 36288, 36288, 179172, 322056, 512568, 750708, 1036476, 1369872, 1750896, 2179548, 36288, 72576, 197316, 340200, 530712, 768852, 1054620, 1388016, 1769040, 2197692, 36288, 120204, 251748, 358344, 548856, 786996, 1072764, 1406160, 1787184, 2215836, 36288, 120204, 251748, 430920, 567000, 805140, 1090908, 1424304, 1805328, 2233980, 36288, 120204, 251748, 430920, 657720, 823284, 1109052, 1442448, 1823472, 2252124, 36288, 120204, 251748, 430920, 657720, 932148, 1127196, 1460592, 1841616, 2270268, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1478736, 1859760, 2240784, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1623888, 1877904, 2258928, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1623888, 2041200, 2277072, 36288, 120204, 251748, 430920, 657720, 932148, 1254204, 1623888, 2041200, 2458512, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 42504, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 42504, 21252, 63756, 106260, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 42504, 21252, 63756, 106260, 21252, 63756, 127512, 191268, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 42504, 21252, 63756, 106260, 21252, 63756, 127512, 191268, 21252, 63756, 127512, 212520, 297528, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 21252, 42504, 21252, 63756, 106260, 21252, 63756, 127512, 191268, 21252, 63756, 127512, 212520, 297528, 21252, 63756, 127512, 212520, 318780, 425040, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 21252, 63756, 21252, 63756, 106260, 21252, 63756, 127512, 191268, 21252, 63756, 127512, 212520, 297528, 21252, 63756, 127512, 212520, 318780, 425040, 21252, 63756, 127512, 212520, 318780, 446292, 573804, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 191268, 21252, 63756, 127512, 212520, 297528, 21252, 63756, 127512, 212520, 318780, 425040, 21252, 63756, 127512, 212520, 318780, 446292, 573804, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 743820, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 956340, 21252, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 297528, 21252, 63756, 127512, 212520, 318780, 425040, 21252, 63756, 127512, 212520, 318780, 446292, 573804, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 743820, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 935088, 21252, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 425040, 21252, 63756, 127512, 212520, 318780, 446292, 573804, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 743820, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 935088, 21252, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 573804, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 743820, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 935088, 21252, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 743820, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 935088, 21252, 63756, 21252, 63756, 127512, 21252, 63756, 127512, 212520, 21252, 63756, 127512, 212520, 318780, 21252, 63756, 127512, 212520, 318780, 446292, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 21252, 63756, 127512, 212520, 318780, 446292, 595056, 765072, 935088, 12674760, 12674760, 12674760, 12674760, 12674760, 12674760, 12674760, 12674760, 12674760, 15707580, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 65520, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 65520, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 68880, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 65520, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 68880, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 72324, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 65520, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 68880, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 72324, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 75852, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79380, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 65520, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 68880, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 72324, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 75852, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79380, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 79464, 62244, 62244, 62244, 65520, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79380, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83076, 62244, 62244, 65520, 62244, 65520, 68880, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 65520, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 68880, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 72324, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 75852, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79380, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 79464, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79380, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83076, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 83160, 62244, 62244, 62244, 62244, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72240, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75768, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79380, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83076, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 86856, 62244, 62244, 65520, 62244, 65520, 68796, 62244, 65520, 68880, 72324, 62244, 65520, 68880, 72324, 75852, 62244, 65520, 68880, 72324, 75852, 79464, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 86940, 62244, 65520, 68880, 72324, 75852, 79464, 83160, 86940, 443520, 446544, 449568, 452592, 455616, 458640, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 446544, 449568, 452592, 455616, 458640, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 449568, 452592, 455616, 458640, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 452592, 455616, 458640, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 455616, 458640, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 458640, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 461664, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 476448, 464688, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 476448, 479472, 467712, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 476448, 479472, 482496, 470736, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 476448, 479472, 482496, 485520, 473760, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 476448, 479472, 482496, 485520, 488544, 476784, 458304, 461328, 464352, 467376, 470400, 473424, 476448, 479472, 482496, 485520, 488544, 491568, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 84, 1092, 3444, 7140, 12180, 18564, 26292, 35364, 45780, 57540, 70644, 85092, 86940, 86940, 86940, 86940, 86940, 86940, 86940, 86940, 86940};

    //std::vector<float> input{30, 10, 15, 1, 60, 9, 300};
    std::vector<int> indexes = cluster(input, k);
    std::map<int,std::set<int>> clusters;
    /*
    for(int i = 0; i < remap.size(); ++i) {
        int index = remap[i];
        if(clusters.contains(index)){
            clusters[index].insert(i);
        } else {
            clusters[index] = {i};
        }
    }
    */
    for(auto val : indexes){
        std::cout << val << " ";
    }
    std::cout << std::endl;
}