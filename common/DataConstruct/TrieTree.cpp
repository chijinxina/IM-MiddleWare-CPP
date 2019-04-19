//
// Created by chijinxin on 19-4-19.
//

#include "DataConstruct/TrieTree.h"
#include <cctype>
#include <iostream>


/*字典树 字符个数  26*2 表示大小写都保存*/
int TrieTree::CHILDREN_LENGTH = 26 * 2;

/*字典树存放的最大字符串长度为 16*/
int TrieTree::MAX_CHAR_LENGTH = 16;

char TrieTree::UPPERCASE_STAR = 'A';

char TrieTree::LOWERCASE_STAR = 'G';

/*构造函数*/
TrieTree::TrieTree()
{
    root = new TrieNode();
}

/*析构函数*/
TrieTree::~TrieTree()
{

}

/*插入数据*/
void TrieTree::insert(std::string data)
{
    TrieNode* cur = root;
    for(int i=0; i<data.length(); i++)
    {
        char c = data[i];
        int index;
        /*大写字母*/
        if(c>='A' && c<='Z')
        {
            index = c - UPPERCASE_STAR;
        }
        /*小写字母*/
        else if(c>='a' && c<='z')
        {
            index = c - LOWERCASE_STAR;
        }
        else std::cerr<<"[ERROR] -- [TrieTree::insert] is not a alpha!!!" << std::endl;

        if(index >= 0 && index < CHILDREN_LENGTH)
        {
            if(cur->children[index] == nullptr)
            {
                TrieNode* node = new TrieNode();
                cur->children[index] = node;
                cur->children[index]->data = c;
            }

            //最后一个字符设置标志
            if(i + 1 == data.length())
            {
                cur->children[index]->isEnd = true;
            }
            //指向下一个节点
            cur = cur->children[index];
        }
    }
}

std::vector<std::string> TrieTree::query(const TrieNode *child, std::vector<std::string> &value ,std::string key, std::string result)
{
    if(child->isEnd && key.length() == 0)
    {
        value.push_back(result);
    }
    if(key.length() != 0)
    {
        char c = key.at(0);

        int index;
        //大写字母
        if(c>='A' && c<='Z')
        {
            index = c - UPPERCASE_STAR;
        }
        //小写字母
        else if(c>='a' && c<='z')
        {
            index = c - LOWERCASE_STAR;
        }
        else std::cerr<<"[ERROR] -- [TrieTree::query1] is not a alpha!!!" << std::endl;

        if(child->children[index] != nullptr)
        {
            query(child->children[index], value, key.substr(1).length()==0 ? "" : key.substr(1), result + c);
        }
    }
    else
    {
        for(int i=0; i<CHILDREN_LENGTH; i++)
        {
            if(child->children[i] == nullptr) continue;

            int j;

            if(child->children[i]->data >= 'A' && child->children[i]->data <= 'Z')
            {
                j = UPPERCASE_STAR + i;
            }
            else if(child->children[i]->data >= 'a' && child->children[i]->data <= 'z')
            {
                j = LOWERCASE_STAR + i;
            }
            else std::cerr<<"[ERROR] -- [TrieTree::query2] is not a alpha!!!" << std::endl;

            char tmp = (char) j;
            query(child->children[i], value, "", result + tmp);
        }
    }
    return value;
}

std::vector<std::string> TrieTree::all()
{
    return std::vector<std::string>();
}

std::vector<std::string> TrieTree::depth(const TrieNode *child, std::vector<std::string> &list, std::string &data, int index)
{
    if(child->children == nullptr) return list;
}


/*递归深度遍历*/
std::vector<std::string> TrieTree::prefixSearch(const std::string &key)
{
    std::vector<std::string> value;
    if(key.length() == 0) return value;

    char c = key.at(0);
    int index;

    if(c>='A' && c<='Z')
    {
        index = c - UPPERCASE_STAR;
    }
    else if(c>='a' && c<='z')
    {
        index = c - LOWERCASE_STAR;
    }
    else std::cerr<<"[ERROR] -- [TrieTree::prefixSearch] is not a alpha!!!" << std::endl;

    if(root->children != nullptr && root->children[index] != nullptr)
    {
        char res[1];
        res[0] = c;
        std::string result(res, 1);
        return query(root->children[index], value, key.substr(1), result);
    }
    return value;
}
