//
// Created by chijinxin on 19-4-19.
//
#include "DataConstruct/SortArrayMap.h"
#include <algorithm>
#include <iostream>

/*构造函数*/
SortArrayMap::SortArrayMap()
{}

/*析构函数*/
SortArrayMap::~SortArrayMap()
{
    for(int i=0; i<buckets.size(); i++)
    {
        delete(buckets[i]);
    }
}

/*写入数据*/
void SortArrayMap::add(long key, std::string value)
{
    Node* node = new Node(key, value);
    buckets.push_back(node);
}

/*顺时针取出数据*/
std::string SortArrayMap::firstNodeValue(long key)
{
    if(buckets.size()==0) return nullptr;

    for(Node* bucket : buckets)
    {
        if(bucket == nullptr) break;
        if(bucket->key >= key) return bucket->value;
    }
    return buckets[0]->value;
}

/*排序*/
void SortArrayMap::sort()
{
    std::sort(buckets.begin(), buckets.end(), [](const Node* n1, const Node* n2) -> bool
        {
            if(n1->key < n2->key) return true;
            else return false;
        });
}



/*打印*/
void SortArrayMap::print()
{
    for(Node* bucket : buckets)
    {
        if(bucket == nullptr) continue;

        std::cout<<bucket->toString()<<std::endl;
    }
}
