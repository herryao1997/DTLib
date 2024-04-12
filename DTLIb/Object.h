// OBJECT_H
// Created by herryao on 4/4/24.
//

#ifndef DTLIB_OBJECT_H
#define DTLIB_OBJECT_H
#include <iostream>
namespace DTLib {

    class Object
    {
    public:
        void* operator new(size_t size) noexcept;
        void operator delete(void* p);
        void* operator new[](size_t size) noexcept;
        void operator delete[](void* p);
        //顶层类是抽象类型
        virtual ~Object() = 0;
    };

} // DTLIb

#endif //DTLIB_OBJECT_H
