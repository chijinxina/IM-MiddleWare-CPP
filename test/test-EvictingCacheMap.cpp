//
// Created by chijinxin on 19-4-20.
//
#include <iostream>
#include <folly/container/EvictingCacheMap.h>

using namespace std;
using namespace folly;

void EXPECT_EQ(int a, int b)
{
    if(a == b) cout<<"TRUE"<<endl;
    else cerr<<"FALSE"<<endl;
}
void EXPECT_FALSE(bool b)
{
    if(!b) cout<<"TRUE"<<endl;
    else cerr<<"FALSE"<<endl;
}
void EXPECT_TRUE(bool b)
{
    EXPECT_FALSE(!b);
}

int main()
{
    EvictingCacheMap<int, int> map(0);

    cout<<"map.size()="<<map.size()<<endl;
    cout<<"map.empty()="<<map.empty()<<endl;
    cout<<"map.exists(1)="<<map.exists(1)<<endl;

    map.set(1,11);

    cout<<"---------------------------"<<endl;
    cout<<"map.size()="<<map.size()<<endl;
    cout<<"map.empty()="<<map.empty()<<endl;
    cout<<"map.get(1)="<<map.get(1)<<endl;
    cout<<"map.exists(1)="<<map.exists(1)<<endl;

    map.set(1,2);
    cout<<"---------------------------"<<endl;
    cout<<"map.size()="<<map.size()<<endl;
    cout<<"map.empty()="<<map.empty()<<endl;
    cout<<"map.get(1)="<<map.get(1)<<endl;
    cout<<"map.exists(1)="<<map.exists(1)<<endl;

    map.erase(1);
    cout<<"---------------------------"<<endl;
    cout<<"map.size()="<<map.size()<<endl;
    cout<<"map.empty()="<<map.empty()<<endl;

    //cout<<"map.get(1)="<<map.get(1)<<endl;
    cout<<"map.exists(1)="<<map.exists(1)<<endl;


    EvictingCacheMap<int, int> map2(0);
    for (int i = 0; i < 100; i++) {
        map.set(i, i);
        EXPECT_EQ(i + 1, map.size());
        EXPECT_FALSE(map.empty());
        EXPECT_TRUE(map.exists(i));
        EXPECT_EQ(i, map.get(i));
    }

    map.prune(1000000);
    EXPECT_EQ(0, map.size());
    EXPECT_TRUE(map.empty());
    for (int i = 0; i < 100; i++) {
        EXPECT_FALSE(map.exists(i));
    }

    return 0;
}