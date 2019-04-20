//
// Created by chijinxin on 19-4-20.
//
#include "util/randnum.h"

/*随机数引擎*/
std::mt19937 make_seeded_engine() {
    std::random_device r;
    std::seed_seq seed{r(), r(), r(), r(), r(), r(), r(), r()};
    return std::mt19937(seed);
}
