//
// Created by chijinxin on 19-4-19.
//

#include "RouteAlgorithm/ConsistentHash/ConsistentHashHandle.h"

/*设置一致性hash求解器*/
void ConsistentHashHandle::setHash(std::shared_ptr<AbstractConsistentHash> hash)
{
    this->consistentHashPtr_ = hash;
}

/*在一批服务器里进行路由*/
std::string ConsistentHashHandle::routeServer(std::vector<std::string> &values, std::string key)
{
    return consistentHashPtr_->process(values, key);
}
