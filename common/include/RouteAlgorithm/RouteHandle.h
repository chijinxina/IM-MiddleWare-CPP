//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_ROUTEHANDLE_H
#define CIM_CPP_ROUTEHANDLE_H

#include <string>
#include <list>

class RouteHandle {
    /*在一批服务器里进行路由*/
    virtual std::string routeServer(std::list<std::string> &values, std::string key) = 0;
};


#endif //CIM_CPP_ROUTEHANDLE_H
