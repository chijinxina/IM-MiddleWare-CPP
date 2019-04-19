//
// Created by chijinxin on 19-4-18.
//
#include <iostream>
#include <fstream>
#include "protocol/BaseRequestProto.pb.h"
#include "protocol/BaseResponseProto.pb.h"

using namespace std;

void disPlayMsg(const protocol::CIMRequest &msg) {
    cout<<"{ id="<<msg.requestid() <<",";
    cout<<" reqmsg="<<msg.reqmsg() <<",";
    cout<<" type="<<msg.type()<<" }"<<endl;
}

int main() {

    protocol::CIMRequest msg1;
    protocol::CIMRequest msg2;
    msg1.set_requestid(10);
    msg1.set_reqmsg("chijinxin say hello!");
    msg1.set_type(222);

    {
        fstream output("../test/test-proto.log", ios::out | ios::trunc | ios::binary);

        if(!msg1.SerializeToOstream(&output)) {
            cerr <<"failed to serialize msg!"<<endl;
            return -1;
        }
    }
    
    {
        fstream input("/home/chijinxin/chijinxin/cim-cpp/test/test-proto.log", ios::in | ios::binary);
        
        if(!msg2.ParseFromIstream(&input)) {
            cerr <<"failed to parse msg!"<<endl;
            return -1;
        }
    }
    
    disPlayMsg(msg2);

    return 0;
}
