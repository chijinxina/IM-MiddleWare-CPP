//
// Created by chijinxin on 19-4-19.
//
#include <iostream>
#include "RouteAlgorithm/Random/RandomHandle.h"

/*路由策略， 随机*/
std::string RandomHandle::routeServer(std::list<std::string> &values, std::string key)
{
    int size = values.size();

    if(size <= 0)
    {
        std::cerr<<"[ERROR] -- CIM-Server可用列表为空！"<<std::endl;
    }

  //  int offset =
}
