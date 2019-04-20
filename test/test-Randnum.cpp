//
// Created by chijinxin on 19-4-20.
//

#include <iostream>
#include <functional>
#include <future>
#include <random>
#include "util/randnum.h"

using namespace std;
/*
 * 测试线程安全的随机数发生器
 */

int main()
{
    std::async(std::launch::async, []()
        {
            auto randnum = bind(uniform_int_distribution<int>(1,3), make_seeded_engine());

            for(int i=0; i<50; i++)
            {
                cout<<randnum()<<" ";
            }
        });

    std::async(std::launch::async, []()
    {
        auto randnum = bind(uniform_int_distribution<int>(11,22), make_seeded_engine());

        for(int i=0; i<50; i++)
        {
            cerr<<randnum()<<" ";
        }
    });


    return 0;
}

