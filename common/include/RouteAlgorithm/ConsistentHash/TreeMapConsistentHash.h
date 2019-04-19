//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_TREEMAPCONSISTENTHASH_H
#define CIM_CPP_TREEMAPCONSISTENTHASH_H

#include <map>
#include <string>
#include "RouteAlgorithm/ConsistentHash/AbstractConsistentHash.h"

/*
 * TreeMap实现一致性hash
 */

class TreeMapConsistentHash : public AbstractConsistentHash {
public:
    //TreeMapConsistentHash();
    void add(long key, std::string value) override;
    std::string getFirstNodeValue(std::string value) override;

    void sort() override;

private:
    /*虚拟节点数量*/
    static int VIRTUAL_NODE_SIZE;
    /*核心数据结构*/
    std::map<long, std::string> treeMap;
};


#endif //CIM_CPP_TREEMAPCONSISTENTHASH_H
