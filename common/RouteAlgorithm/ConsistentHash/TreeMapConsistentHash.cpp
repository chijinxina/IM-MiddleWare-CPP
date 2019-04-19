//
// Created by chijinxin on 19-4-19.
//
#include <iostream>
#include <sstream>
#include <RouteAlgorithm/ConsistentHash/TreeMapConsistentHash.h>

#include "RouteAlgorithm/ConsistentHash/AbstractConsistentHash.h"
#include "RouteAlgorithm/ConsistentHash/TreeMapConsistentHash.h"
/*
 * TreeMap实现一致性hash
 */

/*虚拟节点的数量*/
int TreeMapConsistentHash::VIRTUAL_NODE_SIZE = 2;

/*构造函数*/
//TreeMapConsistentHash::TreeMapConsistentHash()
//{}

/*添加节点*/
void TreeMapConsistentHash::add(long key, std::string value)
{
    for(int i=0; i<VIRTUAL_NODE_SIZE; i++)
    {
        std::stringstream ss;
        ss<<"vir"<<key<<i;

        long hashCode = hash(ss.str());

        treeMap.insert(std::pair<long, std::string>(hashCode, value));
    }

    treeMap.insert(std::pair<long, std::string>(key, value));
}

/*一致性hash环上寻找最接近的节点*/
std::string TreeMapConsistentHash::getFirstNodeValue(std::string value)
{
    auto iter = treeMap.begin();
    long hashCode = hash(value);

    std::cout<<"[TreeMapConsistentHash::getFirstNodeValue] -- value="<<value<<", hashCode="<<hashCode<<std::endl;

    //打印tree map中的元素
//    for(std::pair<long, std::string> x : treeMap)
//    {
//        std::cout<<"Node{ key="<<x.first<<", value="<<x.second<<" }"<<std::endl;
//    }

    iter = treeMap.lower_bound(hashCode);

    return iter->second;
}

void TreeMapConsistentHash::sort() {}
