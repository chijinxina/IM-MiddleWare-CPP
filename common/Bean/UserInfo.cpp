//
// Created by chijinxin on 19-4-16.
//
#include <iostream>
#include <string>
#include <boost/format.hpp>

#include "Bean/UserInfo.h"

using namespace std;

long UserInfo::getUserId() {
    return userId;
}

void UserInfo::setUserId(long userId) {
    userId = userId;
}

string UserInfo::getUserName() {
    return userName;
}

void UserInfo::setUserName(string userName) {
    userName = userName;
}

string UserInfo::toString() {
    boost::format fmt("UserInfo{ userId=%d, userName=%s }");
    return (fmt % userId % userName).str();
}
