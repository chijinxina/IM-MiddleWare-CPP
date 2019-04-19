//
// Created by chijinxin on 19-4-19.
//

#include "RouteAlgorithm/ConsistentHash/SortArrayMapConsistentHash.h"
#include <sstream>
#include <iostream>

/*虚拟节点数量*/
int SortArrayMapConsistentHash::VIRTUAL_NODE_SIZE = 2;

void SortArrayMapConsistentHash::add(long key, std::string value)
{
    for(int i=0; i<VIRTUAL_NODE_SIZE; i++)
    {
        std::stringstream ss;
        ss<<"vir"<<key<<i;
        long hashCode = hash(ss.str());
        sortArrayMap.add(hashCode, value);
    }
    sortArrayMap.add(key, value);
}

std::string SortArrayMapConsistentHash::getFirstNodeValue(std::string value)
{
    long hashCode = hash(value);
    std::cout<<"[SortArrayMapConsistentHash::getFirstNodeValue] -- value="<<value<<", hashCode="<<hashCode<<std::endl;

    //打印数组中的元素
    //sortArrayMap.print();

    return sortArrayMap.firstNodeValue(hashCode);
}

/*排序*/
void SortArrayMapConsistentHash::sort()
{
    sortArrayMap.sort();
}
