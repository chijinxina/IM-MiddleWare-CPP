//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_SORTARRAYMAP_H
#define CIM_CPP_SORTARRAYMAP_H

#include <string>
#include <sstream>
#include <vector>

/*
 * 数据节点
 */
class Node {
public:
    long key;
    std::string value;

    Node(long key, std::string value)
    {
        this->key = key;
        this->value = value;
    }

    std::string toString()
    {
        std::stringstream ss;
        ss << "Node{ "<<"key="<<key<<", "<<"value="<<value<<" }";
        return ss.str();
    }
};

/*
 * 根据 key 排序的 Map
 */

class SortArrayMap {
public:
    /*构造函数*/
    SortArrayMap();

    /*析构函数*/
    ~SortArrayMap();


    /*写入数据*/
    void add(long key, std::string value);


    /*顺时针取出数据*/
    std::string firstNodeValue(long key);

    /*排序*/
    void sort();

    /*打印*/
    void print();


private:
    /*核心数组*/
    std::vector<Node*> buckets;
};


#endif //CIM_CPP_SORTARRAYMAP_H
