//
// Created by herryao on 4/4/24.
//

#include "Object.h"
#include <cstdlib>

namespace DTLib
{
    void *Object::operator new(size_t size) noexcept
    {
//        std::cout << "Object::operator new: " << size << std::endl;
        return malloc(size);
    }

    void Object::operator delete(void *p)
    {
//        std::cout << "Object::operator delete: " << p << std::endl;
        free(p);
    }

    void *Object::operator new[](size_t size) noexcept
    {
        std::cout << __FUNCTION__ << std::endl;
        return malloc(size);
    }

    void Object::operator delete[](void *p) {
        std::cout << __FUNCTION__ << std::endl;
        free(p);
    }

    Object::~Object(){}

	bool Object::operator==(const Object &obj) const
	{
		return (this == &obj);
	}

	bool Object::operator!=(const Object &obj) const{
		return (&obj != this);
	}


} // DTLIb