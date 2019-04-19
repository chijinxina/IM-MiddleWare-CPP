//
// Created by chijinxin on 19-4-16.
//

#ifndef CIM_CPP_USERINFO_H
#define CIM_CPP_USERINFO_H

#include <iostream>
#include <string>
using namespace std;

/*
 * 用户信息
 */
class UserInfo {
public:
    UserInfo(long userId, string userName):userId(userId),userName(userName)
    {}

    long getUserId();

    void setUserId(long userId);

    string getUserName();

    void setUserName(string userName);

    string toString();

private:
    long userId;
    string userName;
};

#endif //CIM_CPP_USERINFO_H

