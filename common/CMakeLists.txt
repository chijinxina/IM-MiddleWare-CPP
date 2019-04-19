cmake_minimum_required(VERSION 3.0.2)


add_library(common
        util/md5.cpp

        DataConstruct/SortArrayMap.cpp
        DataConstruct/TrieTree.cpp

        Bean/UserInfo.cpp
        StatusEnums/StatusEnums.cpp

        protocol/BaseRequestProto.pb.cc
        protocol/BaseResponseProto.pb.cc

        RouteAlgorithm/ConsistentHash/TreeMapConsistentHash.cpp
        RouteAlgorithm/ConsistentHash/SortArrayMapConsistentHash.cpp
        RouteAlgorithm/ConsistentHash/ConsistentHashHandle.cpp RouteAlgorithm/Random/RandomHandle.cpp RouteAlgorithm/Random/RandomHandle.h)

target_link_libraries(common
        ${PROTOBUF_LIBRARIES}
        )