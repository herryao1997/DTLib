cmake_minimum_required(VERSION 3.22)
project(DTLIb)

set(CMAKE_CXX_STANDARD 17)

add_executable(DTLIb main.cpp
        SmartPointer.h
        Exception.h
        Exception.cpp
        Object.cpp
        Object.h
        List.h
        SeqList.h
        StaticList.h
        DynamicList.h
        Array.h
        StaticArray.h
        DynamicArray.h
)
