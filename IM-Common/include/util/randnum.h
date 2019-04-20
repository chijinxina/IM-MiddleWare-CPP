//
// Created by chijinxin on 19-4-20.
//

#ifndef CIM_CPP_RANDNUM_H
#define CIM_CPP_RANDNUM_H

#include <random>

/*
 * 线程安全的随机数发生器
 * 每个线程分配一个随机数引擎
 */
std::mt19937 make_seeded_engine();



#endif //CIM_CPP_RANDNUM_H
