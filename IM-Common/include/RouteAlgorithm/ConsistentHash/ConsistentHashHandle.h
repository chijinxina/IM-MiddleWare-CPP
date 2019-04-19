//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_CONSISTENTHASHHANDLE_H
#define CIM_CPP_CONSISTENTHASHHANDLE_H

#include <memory>
#include "RouteAlgorithm/RouteHandle.h"
#include "RouteAlgorithm/ConsistentHash/AbstractConsistentHash.h"

class ConsistentHashHandle : public RouteHandle{
public:
    /*在一批服务器里进行路由*/
    std::string routeServer(std::list<std::string> &value, std::string key) override;

    /*设置一致性hash求解器*/
    void setHash(std::shared_ptr<AbstractConsistentHash> hash);

private:
    std::shared_ptr<AbstractConsistentHash> consistentHashPtr_;
};


#endif //CIM_CPP_CONSISTENTHASHHANDLE_H
