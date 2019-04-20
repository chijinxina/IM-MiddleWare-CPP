//
// Created by chijinxin on 19-4-19.
//
#include <iostream>
#include <random>
#include <functional>

#include "util/randnum.h"
#include "RouteAlgorithm/Random/RandomHandle.h"

/*路由策略， 随机*/
std::string RandomHandle::routeServer(std::vector<std::string> &values, std::string key)
{
    int size = values.size();

    if(size <= 0)
    {
        std::cerr<<"[ERROR] -- CIM-Server可用列表为空！"<<std::endl;
    }

    auto randnum = std::bind(std::uniform_int_distribution<int>(0, size),
            make_seeded_engine());

    int offset = randnum();

    return values[offset];
}
