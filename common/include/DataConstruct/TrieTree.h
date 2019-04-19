//
// Created by chijinxin on 19-4-19.
//

#ifndef CIM_CPP_TRIETREE_H
#define CIM_CPP_TRIETREE_H

#include <vector>
#include <string>
/*
 * 字典树数据节点
 */
class TrieNode {
public:
    /*是否为最后一个字符*/
    bool isEnd;

    /*如果只是查询， 则不需要存储数据*/
    char data;

    /*区分大小写*/
    TrieNode* children[26*2];

    TrieNode()
    {
        isEnd = false;
    }

    ~TrieNode()
    {
        for(int i=0; i<(26*2); i++)
        {
            delete(children[i]);
        }
    }
};

/*
 * 字典树
 * 字符前缀模糊匹配
 */

class TrieTree {
public:
    /*构造函数*/
    TrieTree();
    /*析构函数*/
    ~TrieTree();

    /*写入字符串 构建字典树*/
    void insert(std::string data);

    /*查询*/
    std::vector<std::string> query(const TrieNode* child, std::vector<std::string> &value ,std::string key, std::string result);

    /*查询所有*/
    std::vector<std::string> all();
    std::vector<std::string> depth(const TrieNode* child, std::vector<std::string> &list, std::string &data, int index);

    /*递归深度遍历 查询字符串前缀匹配*/
    std::vector<std::string> prefixSearch(const std::string &key);

private:
    /*字典树 字符个数*/
    static int CHILDREN_LENGTH;
    /*存放的最大字符串长度*/
    static int MAX_CHAR_LENGTH;
    /*大写字母*/
    static char UPPERCASE_STAR;
    /*小写字母*/
    static char LOWERCASE_STAR;

private:
    /*字典树根节点*/
    TrieNode* root;
};


#endif //CIM_CPP_TRIETREE_H
