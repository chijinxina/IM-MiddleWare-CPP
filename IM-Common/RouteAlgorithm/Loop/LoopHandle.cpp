//
// Created by chijinxin on 19-4-20.
//

#include <iostream>
#include <string>
#include <sstream>
#include "RouteAlgorithm/Loop/LoopHandle.h"

/*构造函数*/
LoopHandle::LoopHandle():index(0L)
{}

/*从IM服务器列表中选择服务器*/
std::string LoopHandle::routeServer(std::vector<std::string> &values, std::string key)
{
    if(values.size() == 0)
    {
        std::cerr<<"IM-Server可用服务器列表为空！"<<std::endl;
    }

    long position = (index += 1L) % values.size();

    if(position < 0)
    {
        position = 0L;
    }

    return values[(int)position];
}
