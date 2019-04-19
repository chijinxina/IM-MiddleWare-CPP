//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_SORTARRAYMAPCONSISTENTHASH_H
#define CIM_CPP_SORTARRAYMAPCONSISTENTHASH_H

#include "DataConstruct/SortArrayMap.h"
#include "RouteAlgorithm/ConsistentHash/AbstractConsistentHash.h"

class SortArrayMapConsistentHash : public AbstractConsistentHash {
public:
    SortArrayMapConsistentHash() = default;
    ~SortArrayMapConsistentHash() = default;

    void add(long key, std::string value) override;

    std::string getFirstNodeValue(std::string value) override;

    void sort() override;

private:
    /*虚拟节点数量*/
    static int VIRTUAL_NODE_SIZE;
    /*核心数据结构*/
    SortArrayMap sortArrayMap;
};


#endif //CIM_CPP_SORTARRAYMAPCONSISTENTHASH_H
