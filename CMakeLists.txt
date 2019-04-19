cmake_minimum_required(VERSION 3.0.2)

project("CIM-CPP")

add_compile_options(-std=c++11)

# 添加cmake_modules
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

# 添加库文件输出目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 添加可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)

################# wangle #############
find_package(wangle REQUIRED)
message("find wangle include: ${WANGLE_INCLUDE_DIR}")
message("find wangle libraries: ${WANGLE_LIBRARIES}")

################# boost #############
find_package(Boost COMPONENTS system filesystem thread)
message("find Boost include: ${Boost_INCLUDE_DIRS}")
message("find Boost libraries: ${Boost_LIBRARIES}")

################# protobuf #############
find_package(Protobuf REQUIRED)
message("find Protobuf include: ${PROTOBUF_INCLUDE_DIRS}")
message("find Protobuf libraries: ${PROTOBUF_LIBRARIES}")

################# google glags #############
find_package(Gflags)
message("find Gflags include: ${GFLAGS_INCLUDE_DIRS}")
message("find Gflags libraries: ${GFLAGS_LIBRARIES}")

################# google glog #############
find_package(Glog)
message("find Glog include: ${GLOG_INCLUDE_DIRS}")
message("find Glog libraries: ${GLOG_LIBRARIES}")

include_directories(
        ${Boost_INCLUDE_DIRS}
        ${PROTOBUF_INCLUDE_DIRS}
        ${WANGLE_INCLUDE_DIR}
        ${PROJECT_SOURCE_DIR}/common/include
)

add_subdirectory(common)


################# test application #############
add_executable(test-UserInfo test/test-UserInfo.cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(test-UserInfo common)
###
add_executable(test-proto test/test-proto.cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(test-proto common)

### test TrieTree
add_executable(test-TrieTree test/test-TrieTree.cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(test-TrieTree common)

### test SortArrayMap
add_executable(test-SortArrayMap test/test-SortArrayMap.cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(test-SortArrayMap common)

### test ConsistentHash
add_executable(test-ConsistentHash test/test-ConsistentHash.cpp)
link_directories(${PROJECT_SOURCE_DIR}/lib)
target_link_libraries(test-ConsistentHash common)