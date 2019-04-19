//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_RANDOMHANDLE_H
#define CIM_CPP_RANDOMHANDLE_H


#include <RouteAlgorithm/RouteHandle.h>

/*
 * 路由策略， 随机
 */
class RandomHandle : public RouteHandle{
public:
    std::string routeServer(std::list<std::string> &values, std::string key) override;
};


#endif //CIM_CPP_RANDOMHANDLE_H
