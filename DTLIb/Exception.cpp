//
// Created by herryao on 4/4/24.
//

#include "Exception.h"
#include <cstring>
#include <cstdlib>
#include <string>

namespace DTLib
{
    void Exception::init(const char* message, const char* file, int line)
    {
        if(message != nullptr)
        {
            this->m_message = strdup(message);
        }
        if(file != nullptr)
        {
            //将整形变量转换成字符串类型并存储在sl字符数组中
            //itoa(line, sl, 10);   //这一方法定义在<cstdlib>中，但是在当前平台不适用，采用string中的to_string方法实现相同功能
            std::string sl = std::to_string(line);

            //使用malloc来分配动态内存： 文件位置 + 行数信息 + (':' + '\0') = 2
            //由于sl是string类型，因此需要使用string类型中的方法c_str()转换成char* 类型并进行合并
            const char* cstr = sl.c_str();
//            this->m_location = (char*)malloc(strlen(file) + strlen(cstr) + 2);
            this->m_location = static_cast<char*> (malloc(strlen(file) + strlen(cstr) + 2));
            if(this->m_location != nullptr)
            {
                m_location = strcpy(m_location, file);
                m_location = strcat(m_location, ":");
                m_location = strcat(m_location, cstr);
            }
            /*
            else //干脆无需处理，如果出现问题就malloc一个空指针
            {
                //抛出异常？父类构建时无法调用子类。
                //这回造成循环调用，死循环。
                THROW_EXCEPTION(NoEnoughMemoryException, nullptr);
            }
            */
        }
        else
        {
            m_location = nullptr;
        }
    }

    Exception::Exception(const char *message)
    {
        init(message, nullptr, 0);
    }

    Exception::Exception(const char *file, int line)
    {
        init(nullptr, file, line);
    }

    Exception::Exception(const char *message, const char *file, int line)
    {
        init(message, file, line);
    }

    Exception::Exception(const Exception &e)
    {
        this->m_message = strdup(e.m_message);
        this->m_location = strdup(e.m_location);
    }

    Exception &Exception::operator=(const Exception &e)
    {
        if(this != &e)
        {
            free (this->m_location);
            free (this->m_message);
            this->m_message = strdup(e.m_message);
            this->m_location = strdup(e.m_location);;
        }
        return *this;
    }

    const char *Exception::message() const
    {
        return this->m_message;
    }

    const char *Exception::location() const
    {
        return this->m_location;
    }

    Exception::~Exception()
    {
        if(this->m_location != nullptr)
            free(this->m_location);
        if(this->m_message != nullptr)
            free(this->m_message);
    }
}