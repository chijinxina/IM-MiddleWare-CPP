//
// Created by chijinxin on 19-4-18.
//

#ifndef CIM_CPP_ABSTRACTCONSISTENTHASH_H
#define CIM_CPP_ABSTRACTCONSISTENTHASH_H

#include <string>
#include <vector>
#include <functional>
#include "util/md5.h"

/*
 * 一致性hash算法抽象类接口
 */
class AbstractConsistentHash {
public:
    /*构造函数*/
    //AbstractConsistentHash(){}
    /*析构函数*/
    //virtual ~AbstractConsistentHash() = 0;

    /*新增节点*/
    virtual void add(long key, std::string value) = 0;

    /*排序节点,数据结构自身支持排序可以不用重写*/
    virtual void sort() = 0;

    /*根据当前的 key 通过一致性 hash 算法的规则取出一个节点*/
    virtual std::string getFirstNodeValue(std::string value) = 0;

    /*hash运算*/
    virtual long hash(std::string value)
    {
        MD5 *md5;
        MD5_CTX ctx;

        //init md5
        md5->MD5Init(&ctx);

        //update with string
        md5->MD5Update(&ctx, (unsigned char*)value.c_str(), value.length());

        //create the hash
        unsigned char digest[16] = "";
        md5->MD5Final((unsigned char*)digest, &ctx);

        long hashCode = ((long)(digest[3] & 0xFF) << 24)
                | ((long)(digest[2] & 0xFF) <<16)
                | ((long)(digest[1] & 0xFF) << 8)
                | (digest[0] & 0xFF);
        long truncateHashCode = hashCode & 0xffffffffL;
        return truncateHashCode;
    }

    /*传入节点列表以及客户端信息获取一个服务节点*/
    virtual std::string process(std::vector<std::string> &values, std::string key)
    {
        for(std::string x : values)
        {
            add(hash(x), x);
        }

        sort();

        return getFirstNodeValue(key);
    }


};


#endif //CIM_CPP_ABSTRACTCONSISTENTHASH_H
