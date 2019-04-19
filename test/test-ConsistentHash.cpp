//
// Created by chijinxin on 19-4-19.
//
#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <assert.h>

#include "RouteAlgorithm/ConsistentHash/AbstractConsistentHash.h"
#include "RouteAlgorithm/ConsistentHash/TreeMapConsistentHash.h"
#include "RouteAlgorithm/ConsistentHash/SortArrayMapConsistentHash.h"

using namespace std;

/*test TreeMapConsistentHash*/
void getFirstNodeValue1()
{
    AbstractConsistentHash* map = new TreeMapConsistentHash();

    list<string> strs;

    stringstream ss;
    string tmp;

    for(int i=0; i<10; i++)
    {
        ss.clear();
        ss<<"127.0.0."<<i;
        ss>>tmp;
        strs.push_back(tmp);
    }

    string process = map->process(strs, "zhangsan");
    cout<<"execpt: "<<"127.0.0.2"<<endl;
    cout<<"result: "<<process<<endl;

    delete(map);
}

/*test SortArrayMapConsistentHash*/
void getFirstNodeValue2()
{
    AbstractConsistentHash* map1 = new SortArrayMapConsistentHash();
    AbstractConsistentHash* map2 = new TreeMapConsistentHash();

    list<string> strs;

    stringstream ss;
    string tmp;

    for(int i=0; i<10; i++)
    {
        ss.clear();
        ss<<"127.0.0."<<i;
        ss>>tmp;
        strs.push_back(tmp);
    }

    string process1 = map1->process(strs, "zhangsan2");
    string process2 = map2->process(strs, "zhangsan2");

    cout<<"execpt: "<<"127.0.0.3"<<endl;
    cout<<"result1: "<<process1<<endl;
    cout<<"result2: "<<process2<<endl;

    delete(map1);
    delete(map2);
}

/*test3*/
void getFirstNodeValue3()
{
    AbstractConsistentHash* map1 = new SortArrayMapConsistentHash();
    AbstractConsistentHash* map2 = new TreeMapConsistentHash();

    list<string> strs;

    stringstream ss;
    string tmp;

    for(int i=0; i<10; i++)
    {
        ss.clear();
        ss<<"127.0.0."<<i;
        ss>>tmp;
        strs.push_back(tmp);
    }

    string process1 = map1->process(strs, "1551253899106");
    string process2 = map2->process(strs, "1551253899106");

    cout<<"execpt: "<<"127.0.0.6"<<endl;
    cout<<"result1: "<<process1<<endl;
    cout<<"result2: "<<process2<<endl;

    delete(map1);
    delete(map2);
}

/*test4*/
void getFirstNodeValue4()
{
    AbstractConsistentHash* map1 = new SortArrayMapConsistentHash();
    AbstractConsistentHash* map2 = new TreeMapConsistentHash();
    list<string> strs;

    strs.push_back("45.78.28.220:9000:8081");
    strs.push_back("45.78.28.220:9100:9081");


    string process1 = map1->process(strs, "1551253899106");
    string process2 = map2->process(strs, "1551253899106");

    cout<<"execpt: "<<"45.78.28.220:9000:8081"<<endl;
    cout<<"result1: "<<process1<<endl;
    cout<<"result2: "<<process2<<endl;
    delete(map1);
    delete(map2);
}

/*test5*/
void getFirstNodeValue5()
{
    AbstractConsistentHash* map1 = new SortArrayMapConsistentHash();
    AbstractConsistentHash* map2 = new TreeMapConsistentHash();

    list<string> strs;

    strs.push_back("45.78.28.220:9000:8081");
    strs.push_back("45.78.28.220:9100:9081");


    string process1 = map1->process(strs, "1551253899106");
    string process2 = map2->process(strs, "1551253899106");


    cout<<"execpt: "<<"45.78.28.220:9000:8081"<<endl;
    cout<<"result1: "<<process1<<endl;
    cout<<"result2: "<<process2<<endl;

    delete(map1);
    delete(map2);
}

/*test6*/
void getFirstNodeValue6()
{
    AbstractConsistentHash* map1 = new SortArrayMapConsistentHash();
    AbstractConsistentHash* map2 = new TreeMapConsistentHash();

    list<string> strs;

    strs.push_back("45.78.28.220:9000:8081");
    strs.push_back("45.78.28.220:9100:9081");
    strs.push_back("45.78.28.220:9100:10081");


    string process1 = map1->process(strs, "1551253899106");
    string process2 = map2->process(strs, "1551253899106");

    cout<<"execpt: "<<"45.78.28.220:9000:8081"<<endl;
    cout<<"result1: "<<process1<<endl;
    cout<<"result2: "<<process2<<endl;

    delete(map1);
    delete(map2);
}

/*test7*/
void getFirstNodeValue7()
{
    AbstractConsistentHash* map1 = new SortArrayMapConsistentHash();
    AbstractConsistentHash* map2 = new TreeMapConsistentHash();

    list<string> strs;

    strs.push_back("45.78.28.220:9000:8081");
    strs.push_back("45.78.28.220:9100:9081");
    strs.push_back("45.78.28.220:9100:10081");
    strs.push_back("45.78.28.220:9100:00081");

    string process1 = map1->process(strs, "1551253899106");
    string process2 = map2->process(strs, "1551253899106");

    cout<<"execpt: "<<"45.78.28.220:9000:8081"<<endl;
    cout<<"result1: "<<process1<<endl;
    cout<<"result2: "<<process2<<endl;

    delete(map1);
    delete(map2);
}

int main()
{
    getFirstNodeValue1();
    getFirstNodeValue2();
    getFirstNodeValue3();
    getFirstNodeValue4();
    getFirstNodeValue5();
    getFirstNodeValue6();
    getFirstNodeValue7();
    return 0;
}