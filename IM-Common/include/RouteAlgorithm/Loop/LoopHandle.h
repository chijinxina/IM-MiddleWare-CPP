//
// Created by chijinxin on 19-4-20.
//

#ifndef CIM_CPP_LOOPHANDLE_H
#define CIM_CPP_LOOPHANDLE_H

#include <atomic>
#include "RouteAlgorithm/RouteHandle.h"

class LoopHandle : public RouteHandle {
public:
    /*构造函数*/
    LoopHandle();
    /*选择IM服务器*/
    std::string routeServer(std::vector<std::string> &values, std::string key) override;

private:
    /*原子操作 计数*/
    std::atomic<long> index;
};


#endif //CIM_CPP_LOOPHANDLE_H
