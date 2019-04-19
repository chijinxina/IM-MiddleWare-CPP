//
// Created by chijinxin on 19-4-19.
//
#include <iostream>
#include <string>
#include <vector>
#include "DataConstruct/TrieTree.h"
using namespace std;


int main()
{
    TrieTree t;
    t.insert("chijiNxin");
    t.insert("chijinxin");
    t.insert("caaa");
    t.insert("Anzxdfkjas");
    t.insert("anzxdfkjas");
    t.insert("chiasdadasdasd");

    vector<string> res = t.prefixSearch("a");
    for(string x : res)
    {
        cout<<x<<endl;
    }


    return 0;
}
