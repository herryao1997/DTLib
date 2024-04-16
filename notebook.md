# 狄泰软件学院 数据结构实战



## 第零课：启航

- 为什么要学习数据结构和算法？

  - 代码的好坏如何判断？

  - 如何提升编程能力？

  - 如何思考问题的解决方案？

- 数据结构课程的意义。

  - 培养程序设计思维
  - 训练程序语言描述解决问题的能力
  - 计算机专业的基础课
  - 算法分析专业课程的先修课程

- 数据结构和算法

  - 数据结构是算法的基石(如何描述数据之间的关系)
  - 算法是解决问题的工具

- 知其然，也须知其所以然。

  - 排序的时候如何选择排序算法？
  - 单链表就够了，为什么需要使用双向链表？
  - 最短路径算法很有名，为什么很少在项目之中使用？
  - 递归就是函数自己调用自己，这种诡异的做法有什么用？

- 不下降序列问题。

  - 如何求取所有不下降序列？
  - 如何求取固定长度的不下降序列？
  - 如何求取最短和最长的不下降序列？
  - 算法+数据结构

- 目标

  - 面向对象技术
  - 模板技术
  - 异常处理技术
  - 创建可复用的数据结构软件库

## 第一课：进阶高手的大门

- 程序的本质是什么？

  - 解决实际问题的步骤描述
  - 如何把大象放进冰箱里？

  ```cpp
  Elephan* e = new Elephan;
  Fridge* f = new Fridge;
  f->open();//1
  f->put(e);//2
  f->close();//3
  ```

- 理解实际问题

  - 确认问题类型：数值计算，求最小值个数...
  - 确认求解步骤：打开文件，读取数据，关闭文件...

- 如何判断问题求解步骤的好坏？

  - 大O表示法
  - 好程序的标准：时间少，步骤少，内存少
  - 项目实战

- 数据结构课程的起源

  - 1968年，由高纳德教授开创

- 数据结构的研究范围

  - 非数值计算类型的程序问题(非科学计算)
  - 数据之间的组织和操作方式
  - 数据的逻辑结构和存储结构
  - 程序 = 数据结构 + 算法

- 语言和思想一样重要

## 第二课：数据的艺术

- 程序设计的挑战

  - 解决现实生活中的问题
  - 生活中不同的个体之间存在联系
  - 利用计算机程序描述生活中个体之间的复杂关系

- 如何描述生活中的个体？

- 数据的概念

  - 程序的操作对象，用于描述客观事物的符号

- 数据的特点

  - 可以输入到计算机中
  - 可以被计算机程序处理

- 数据中的新概念

  - 数据元素（组成数据的基本单位）
  - 数据项（一个数据元素由若干个数据项构成）
  - 数据对象（性质相同的数据元素的集合）
  - 例子 人类（数据类型）-> 程序员（数据对象）-> 人（数据元素）-> 器官（数据项）

- 数据事例分析

  - ```cpp
    class Student{//数据类型
    	char* name_;
    	int age_;
    };
    
    Student s;	//数据元素
    Student sArray[10];	//数据对象
    
    s.name_ = "herr yao";	//数据项
    s.age_ = 27;
    ```

- 数据结构就是数据对象中数据元素之间的关系

- 数据元素之间不是独立的，存在这特定的关系，这个关系就是数据结构

- 数据结构中的典型结构（逻辑结构）

  - 集合结构：数据之间没有特别的关系，仅属于相同集合
  - 线性结构：数据之间是一对一的关系，例如数组
  - 树形结构：数据元素之间存在一对多的层次关系（笔试面试重点）
  - 图形结构：数据元素之间是多对多的关系（难点）

- 物理结构

  - 顺序存储结构（栈）：将数据存在连续的单元中
  - 链式存储结构（堆）：存储在任意的存储单元中，通过地址保存找到相关联的数据

## 第三课：初识程序的灵魂

- 高效程序的评判标准
  - 程序越短越好？
  - 程序难以看懂就是高标准？
  - 数据结构描述了数据之间的静态关系
  - 高效的程序需要在数据结构的基础上设计和选择的算法
  - 高效的程序是恰当的数据结构和合适的算法的结合体
- 算法是特定问题求解步骤的描述
  - 算法是独立存在的一种解决问题的方法和思想
  - 对于算法而言，语言是工具，思想是本质
  - 在计算机中算法表现为指令的有限序列
- 算法的特性：
  - 输入：具有0个或者多个输入
  - 输出：至少具有一个输出
  - 有穷性：算法在有限步骤，以及可以接受的时间后会自动结束而不会无限循环
  - 确定性：算法中的每一步都有确定的含义，不会出现二异性
  - 可行性：算法的每一步都是可行的
- 算法的正确性：
  - 算法对于合法的数据能够得到满足要求的结果
  - 算法能够处理非法输入并得到合理的结果（鲁棒性）
  - 算法对于边界的数据和压力数据都能得到满足要求的结果
  - 正确性是最需要满足的基本准则，但是作为计算机不可能无限制的满足这条准则
- 算法的附加特性
  - 可读性：算法要方便阅读，理解和交流
  - 健壮性：算法不应该产生莫名其妙的结果
  - 性价比：利用最少的资源得到满足需求的结果
- 程序是写给人看得，而不是计算机

## 第四课：程序灵魂的审判

- 选择程序的标准，最重要的特性是什么？如何比较评判？
- 算法的效率比较

- 事后统计法：比较算法对于相同输入计算进行处理时间的比较，运行较短时间的算法为较优算法。

  - 缺陷：
    - 硬件和环境因素的强依赖性
    - 必须编写相应的程序
    - 测试数据选取的困难

- 事前统计法：利用统计的方法对算法的效率进行定性估算

  - 影响算法效率的主要因素：

    - 算法采用的策略和方法
    - 问题的输入规模
    - 编译器所产生的代码
    - 计算机的执行速度

  - 算法效率的简单估算：

  - ```cpp
    long sum1(int n)
    {
        long ret = 0;
        int *array = new int[n];
        // 执行两次
        for(int i=0; i<n; i++)
        {
            array[i] = i + 1;
        }
        //执行n次
        for(int i=0; i<n; i++)
        {
            ret += array[i];
        }
        //执行n次
        delete []array;
        return ret;
        //执行两次
        //一共执行2n+4次
    }
    
    
    long sum2(int n)
    {
        long ret = 0;
        // 执行一次
        for(int i=0; i<n; i++)
        {
            ret += (i+1);
        }
        //执行n次
        
        return ret;
        //执行一次
        //一共执行n+2次
    }
    
    
    long sum3(int n)
    {
        long ret = 0;
        //执行一次
        if(n > 0)
        {
            ret = (n + 1) * n / 2;
        }
        //执行一次
        return ret;
        //执行一次
        //一共执行三次
    }
    ```

- 程序效率估算中关键部分的操作数量为n而非常量

- 问题规模越大，算法之间的效率差异越大

- 定性效率分析的变种表达式，仅使用n的最高次项来估算效率：

  - 低次项和常数项直接可以忽略不计
  - $2n^2+3n+1 =n^2 $
  - $4n +2 = n$
  - $2n^3+3n+1=n^3$

## 第五课：算法的时间复杂度

- 判断一个算法的效率，只需要判断操作数中最高次项的阶数就可以了

- 如何用符号定性的判断算效率？

- 算法的复杂度（定性评估）

  - 时间复杂度：算法运行后对于时间的需求定性描述
  - 空间复杂度：算法运行后对于空间的需求定性描述

- 数据结构课程重点关注的是算法的时间复杂度

- 大O表示法

  - 算法效率严重依赖于操作（Operators）的数量
  - 操作数量的估算可以作为时间复杂度的估算
  - 在判断时首先关注操作数量的最高次项
    - $O(5) = O(1)$
    - $O(2n-1) =O(2n)= O(n)$
    - $O(n^2+n+1) = O(n^2)$
    - $O(3n^3+1) = O(3n^3)=O(n^3)$

- 常见时间复杂度：$O(n)$

  - ```cpp
    for(int i=0; i<n; i++)
    {
        //时间复杂度为O(n)
        //循环次数为n
    }
    ```

- 常见时间复杂度：$O(logn)$ 与对数底数无关

  - ```cpp
    int i = 1;
    while(i < n)
    {
        //复杂度为O(1)的语句
        i *= 2;
        //循环次数为log2(n)
    }
    ```

- 常见时间复杂度：$O(n^2)$

  - ```cpp
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //复杂度为O(1)的语句
    	    //循环次数为n^2
        }
    }
    ```

- 时间复杂度练习：

  - ```cpp
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            //复杂度为O(1)的语句
    	    //循环次数为1+2+...+n = (1+n)*n/2
            //循环次数为(n^2+n)/2
            //O(n^2)
        }
    }
    ```

## 第六课：算法效率的度量

- 算法的复杂度不能超过$O(n^2)$

- 常见的时间复杂度：

- | 操作数量示例(效率递减) | 大O表示法   | 术语    |
  | ---------------------- | ----------- | ------- |
  | 15                     | $O(1)$      | 常数阶  |
  | $3log_2^n$             | $O(log^n)$  | 对数阶  |
  | $3n+5$                 | $O(n)$      | 线性阶  |
  | $3n*log_2^n+4n+2$      | $O(nlog^n)$ | nlogn阶 |
  | $5n^2+3n+1$            | $O(n^2)$    | 平方阶  |
  | $6n^3+2n^2+n+1$        | $O(n^3)$    | 立方阶  |
  | $2^n+1$                | $O(2^n)$    | 指数阶  |
  | $n!+3$                 | $O(n!)$     | 阶乘阶  |

- $O(1)<O(log^n)<O(n)<O(nlog^n)<O(n^2)<O(n^3)<O(2^n)<O(n!)$

- 工程设计中$O(n^2)$是最低标准，其余算法不可接受

- 在算法分析中，应当分析最坏情况的时间复杂度

- **算法的空间复杂度（Space Complexity）**

  - 定义：S(n) = S(f(n))
  - n为算法的问题规模
  - f(n)为空间使用函数，与n相关
  - 类似与时间复杂度，空间复杂度也是考虑最高次项的次数

- 空间复杂度计算练习

- ```cpp
  long sum1(int n)	//1
  {
      long ret = 0;	//1
      int *array = new int[n];	//n
      
      for(int i=0; i<n; i++)	//1
      {
          array[i] = i + 1;
      }
      
      for(int i=0; i<n; i++)	//1
      {
          ret += array[i];
      }
      
      delete []array;
      return ret;
      //一共占据空间内存 n+4
      //空间复杂度：S(n+4) = S(n)
  }
  ```

- 空间与时间的策略

  - 多数情况下，算法的时间复杂度更令人关注
  - 如果有必要，可以通过增加额外空间降低时间复杂度（空间换时间）
  - 同理，也可以通过算法计算时间增加来获取空间的降低

- 练习：

  - 问题：在一个由自然数1-1000中某些数字所组成的数组中，每个数字可能出现零次或者多次。设计一个算法找出出现次数最多的数字。

  - ```cpp
    #include <iostream>
    
    using namespace std;
    
    void search(int a[], int len)	//O(n)线性阶算法，利用空间换取时间
    {
        int sp[1000] = {0};
        int max = 0;
        
        for(int i=0; i<len; ++i)
        {
            sp[a[i] - 1]++;
        }
        
        for(int i=0; i<1000; ++i)
        {
            if(max < sp[i])
            {
                max = sp[i];
            }
        }
        
        for(int i=0; i<1000; ++i)
        {
            if(max==sp[i])
            {
                cout << i+1 << endl;
            }
        }
    }
    
    
    int main(int argc, char** argv)
    {
        int 
    }
    
    ```

- 面试题：两个算法的大O表示法相同时，是否意味着两个算法的效率完全相同？ 答：否

## 第七课：课程学习小问答

- 数据结构课程如何学习？
  - 先从概念上形象理解数据元素之间的关系
  - 思考这种关系能够解决什么问题
  - 考虑基于这种关系能够产生哪些算法
  - 理解和熟悉最终的算法
  - 选择一种熟悉的语言编码实战
- 数据结构知识无处不在，在学习数据结构的过程中编程思维会影响整个职业生涯
- 大数据（上层） V.S. 数据结构（底层）
- 人工智能 V.S. 数据结构
  - 知识的模型化和表示方法
  - 启发式搜索理论
  - 推理、规划、演绎和归纳
  - ... ...

##  第八课：泛型编程简介

- 数据结构课程的特点：

  - 专注于数据元素之间的关系（并不关注数据元素的具体类型）
  - 专注于特定结构之上的算法

- 支持泛型编程的语言最适合数据结构课程（C++语言）

- 泛型编程的概念

  - 不考虑具体数据类型的编程方式

  - 对于swap函数可以考虑下面泛型写法

  - ```cpp
    template<typename T>
    void swap(T& a, T& b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
    ```

- C++中的函数模板语法规则

  - `template`关键字声明开始泛型编程
  - `typename`关键字用于声明泛指类型 

- 函数模板的使用

  - 自动类型推导使用

  - 具体类型显示调用

  - ```cpp
    int a = 0;
    int b = 1;
    
    swap(a, b);	//隐式调用，自动推导
    
    float c = 2;
    float d = 3;
    swap<float>(c, d);	//显示调用
    ```

- C++中的类模板

  - 以相同的方式处理不同的类型

  - 在类声明前使用`template`关键字进行标识

  - `<typename T>`用于说明类中使用泛指类型T

  - ```cpp
    template<typename T>
    class Operator
    {
    public:
        T op(T a, T b);
    };
    ```

- 类模板的应用

  - 只能显示指定具体类型，无法自动推导

  - 使用具体类型`<type>`定义对象

  - ```cpp
    Operator<int> op1;
    Operator<double> op2;
    int i = op1.op(1, 2);
    double d = op2.op(0.01, 0.02);
    ```

- 编程实验一：函数模板

- 编程实验二：类模板

- ```cpp
  #include <iostream>
  
  template<typename T>
  void Swap(T& a, T&b)
  {
      T temp = a;
      a = b;
      b = temp;
  }
  
  
  template<typename T>
  class Op
  {
  public:
      T process(T v)
      {
          return v * v;
      }
  };
  
  
  int main() 
  {
      //实验一
      int a = 2;
      int b = 1;
      Swap(a, b);
  
      std::cout << "a = " << a << " b = " << b <<std::endl;
  
      double c = 0.01;
      double d = 0.02;
      Swap(c, d);
  
      std::cout << "c = " << c << " d = " << d <<std::endl;
  
      //实验二
  
      Op<int> opInt;
      Op<double> opDouble;
  
      std::cout << "5 * 5 = " << opInt.process(5) << std::endl;
      std::cout << "0.01 * 0.01 = " << opDouble.process(0.01) << std::endl;
      return 0;
  }
  
  ```

## 第九课：智能指针示例

- 内存泄漏（臭名昭著的Bug）

  - 动态申请堆空间，用完后不归还
  - C++语言中没有垃圾回收机制
  - 指针无法控制所指堆空间的生命周期

- 影响

  - 程序越用越慢，堆内存满载申请内存失败
  - 解决方法，重启系统，但会导致服务器崩溃

- 解决方案：智能指针

  - 指针生命周期结束时，主动释放堆空间
  - 一片堆空间最多只能由一个指针标识
  - 杜绝指针运算和指针比较

- 智能指针的设计方案

  - 通过类木板描述指针的行为
    - 能够定义不同类型的指针对象
  - 重载指针特征操作符号（-> 和 *）
    - 利用对象模拟原生指针的行为

- 智能指针只能用来指向**堆空间中**的单个对象或者变量，不可以用来指向数组，也不可以指向一个局部的对象或者局部变量。

- 智能指针的意义在于最大程度地避免了内存泄漏的问题

- 智能指针类设计代码：

- ```cpp
  // namespace DTLib
  // SmartPointer.h
  // Created by herryao on 4/4/24.
  //
  
  #ifndef DTLIB_SMARTPOINTER_H
  #define DTLIB_SMARTPOINTER_H
  
  namespace DTLib
  {
  
      template<typename T>
      class SmartPointer{
      protected:
          T* m_pointer;
      public:
          SmartPointer(T* p = nullptr)
          {
              this->m_pointer = p;
          }
          T operator*()
          {
              return *(this->m_pointer);
          }
          T* operator->()
          {
              return this->m_pointer;
          }
          bool isNull()
          {
              return (this->m_pointer == nullptr);
          }
          T* get()
          {
              return this->m_pointer;
          }
          ~SmartPointer()
          {
              delete this->m_pointer;
          }
          SmartPointer(const SmartPointer<T>& obj)
          {
              //unique pointer
              this->m_pointer = obj.m_pointer;
              //const_cast to make it mutable
              const_cast<SmartPointer<T>&> (obj).m_pointer = nullptr;
          }
  
          SmartPointer<T>& operator=(const SmartPointer<T>& obj)
          {
              if(&obj != this)
              {
                  //free the current pointing memory
                  delete this->m_pointer;
                  this->m_pointer = obj.m_pointer;
                  const_cast<SmartPointer<T>&>(obj).m_pointer = nullptr;
              }
              //achieving the sequential assignment
              return *this;
          }
      };
  
  }
  
  #endif //DTLIB_SMARTPOINTER_H
  
  ```

- 智能指针类测使用代码

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  using namespace DTLib;
  class Test
  {
  public:
      Test()
      {
          std::cout << __FUNCTION__ << std::endl;
      }
  
      ~Test()
      {
          std::cout << __FUNCTION__ << std::endl;
      }
  };
  
  int main() 
  {
      SmartPointer<Test> sp = new Test;
      SmartPointer<Test> nsp;
      nsp = sp;
  //    nsp++;
      //不允许进行智能指针的加减运算
      std::cout << "sp is null? " << sp.isNull() << std::endl;
      std::cout << "nsp is null? " << nsp.isNull() << std::endl;
      return 0;
  }
  
  ```

## 第十课：C++异常简介

- C++内置了异常处理的语法元素`try... catch...`

  - try语句处理正常代码逻辑

  - catch语句处理异常情况

  - try语句中的异常由对应的catch语句进行处理

  - ```cpp
    try
    {
        double r = divide(1, 0);
    }
    catch(...)
    {
        std::cout << "Divided by zero..." << std::endl;
    }
    ```

  - C++通过`throw`语句抛出异常信息

  - ```cpp
    double divide(double a, double b)
    {
        const double delta = 0.000000000000001;
        double ret = 0;
        //不要使用浮点数之间的相等性比较，采用阈值比较法
        if(!((-delta < b) && (b > delta)))
        {
            ret = a / b;
        }
        else
        {
            throw 0;	//产生除0异常
        }
        
        return ret;
    }
    ```

- C++异常处理分析

  - trow抛出的异常必须被catch处理
    - 当前函数能够处理异常，程序继续往下执行
    - 如不能，则会顺着调用栈向上传播，知道异常得到处理，否则将会终止程序执行

- 编程实验一：初步理解异常处理机制

- ```
  void test01()
  {
      std::cout << "main() begin" << std::endl;
      divide(1, 0);
      std::cout << "main() end" << std::endl;
  }
  
  void test02()
  {
      std::cout << "main() begin" << std::endl;
      try
      {
          divide(1, 0);
      }
      catch(int e)
      {
          std::cerr << "Divided by zero caught!" << std::endl;
      }
      std::cout << "main() end" << std::endl;
  }
  
  int main() {
      test01();
  //    test02();
      return 0;
  }
  ```

- 第一个测试由于异常未被处理会直接导致程序的崩溃

- 第二个测试可以由`try...catch...`正确处理除零操作，并最终成功输出`main() end`。

- 同一个try语句可以跟上多个catch语句。

  - catch语句可以定义具体处理的异常类型。
  - 不同类型的异常由不同的catch语句负责处理。
  - try语句中可以抛出任何类型的异常。
  - catch(...)可以接收并处理所有类型的异常。
  - 任何异常都智能被捕获一次。

- 异常处理的匹配规则

  - 异常被抛出后，自上而下严格匹配每一个catch语句中处理的类型。
  - 异常类型匹配时，类型间转换被禁止。

- 编程实验二：异常抛出类型的匹配机制

- ```cpp
  void test03()
  {
      try
      {
          throw 'c';
      }
      catch(int i)
      {
          std::cout << "catch (int i)" << std::endl;
      }
      catch (double d)
      {
          std::cout << "catch (double d)" << std::endl;
      }
      catch (char c)
      {
          std::cout << "catch (char c)" << std::endl;
      }
  }
  int main() 
  {
  //    test01();
  //    test02();
      test03();
      return 0;
  }
  ```

- 此程序输出结果证实了异常处理的类型匹配规则

- 编程实验三：异常抛出类型的匹配机制

- ```cpp
  void test04()
  {
      try
      {
          throw "hello world\n";
          //throw 0.01;	//此异常会被catch (...)接收并处理
      }
      catch (char* c)
      {
          std::cout << "catch (char* c)" << std::endl;
      }
      catch (const char* cc)
      {
          std::cout << "catch (const char* cc)" << std::endl;
      }
      catch(...)
      {
          std::cout << "catch (...)" << std::endl;
      }
  }
  
  
  int main() 
  {
  //    test01();
  //    test02();
  //    test03();
      test04();
      return 0;
  }
  ```

- 以上测试代码说明了在异常匹配中，字符串和常量字符串是完全不同的两种类型。



## 第十一课：异常类构建

- 异常的类型可以时自定义类类型

- 对i鱼类类型异常的匹配依旧是至上而下严格匹配

- **赋值兼容性原则在异常匹配中依然使用**

- 一般而言

  - 匹配子类异常的catch语句放在上方
  - 匹配父类异常的catch语句放在下方

- 现代C++库必然包涵充要的异常类族，异常类是数据结构类所依赖的基础设施

- **Exception** 

  - `ArithmeticException`：计算异常
  - `NullPointerException`：空指针异常
  - `IndexOutOfBoundsException`：越界异常
  - `NoEnoughMemoryException`：内存不足异常
  - `InvalidParameterException`：参数错误异常

- 异常类中的接口定义

- ```cpp
  class Exception
  {
  public:
      //构造函数
      Exception(const char* message);
      Exception(const char* file, int line);
      Exception(const char* message, const char* file, int line);
      
      //拷贝构造和拷贝赋值
      Exception(const Exception& e);
      Exception& operator= (const Exception& e);
      
      //返回当前信息，异常抛出地址
      virtual const char* message() const;
      virtual const char* location() const;
      
      //纯虚函数
      virtual ~Exception() = 0;
  };
  ```

- 在进行可服用的代码库设计时：

  - 现代C++库必然包涵充要的异常类族。
  - 应当尽量使用面向对象的技术进行架构设计。
  - 使用异常处理机制分离正常和异常的逻辑。

- 编程实验：异常类族的顶层父类设计，ArithmeticException类的设计实现

- 头文件实现如下，其中子类的构造函数实现均调用了父类的构造函数

- ```
  //
  // DTLIB_EXCEPTION_H
  // Created by herryao on 4/4/24.
  //
  
  #ifndef DTLIB_EXCEPTION_H
  #define DTLIB_EXCEPTION_H
  
  namespace DTLib
  {
      class Exception
      {
      protected:
          char* m_message;
          char* m_location;
  
          void init(const char* message, const char* file, int line);
      public:
          //构造函数
          Exception(const char* message);
          Exception(const char* file, int line);
          Exception(const char* message, const char* file, int line);
  
          //拷贝构造和拷贝赋值
          Exception(const Exception& e);
          Exception& operator= (const Exception& e);
  
          //返回当前信息，异常抛出地址
          virtual const char* message() const;
          virtual const char* location() const;
  
          //析构函数只要定义就一定要实现，即使是纯虚函数
          //析构函数最终一定会调用父类的析构函数
          virtual ~Exception() = 0;
      };
  
  
      class ArithmeticException : public Exception
      {
      public:
          ArithmeticException(): Exception(nullptr, nullptr, 0){}
          ArithmeticException(const char* message): Exception(message, nullptr, 0){}
          ArithmeticException(const char* file, int line): Exception(nullptr, file, line){}
          ArithmeticException(const char* message, const char* file, int line): Exception(message, file, line){}
  
          ArithmeticException(const ArithmeticException& e): Exception(e){}
          ArithmeticException& operator= (const ArithmeticException& e)
          {
              Exception::operator=(e);
              return *this;
          }
      };
  }
  #endif //DTLIB_EXCEPTION_H
  
  ```

- 源文件实现如下：

- ```cpp
  //
  // Created by herryao on 4/4/24.
  //
  
  #include "Exception.h"
  #include <cstring>
  #include <cstdlib>
  #include <cstdio>
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
              m_location = strcpy(m_location, file);
              m_location = strcat(m_location, ":");
              m_location = strcat(m_location, cstr);
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
          free(this->m_location);
          free(this->m_message);
      }
  }
  ```
  
- 测试代码如下：

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  
  //使用宏定义来简化代码
  //不需要重复写出文件名和行号
  #define THROW_EXCEPTION(e, m) (throw e(m, __FILE__, __LINE__))
  
  using namespace DTLib;
  
  void test_4_exception();
  
  
  int main()
  {
      test_4_exception();
      return 0;
  }
  
  void test_4_exception()
  {
      try
      {
          //有纯虚函数无法实例化
          THROW_EXCEPTION(ArithmeticException, "test");
      }
      catch(const ArithmeticException& e)
      {
          //含有继承关系时，子类应当提前catch，父类应当之后
          std::cout << "catch (const ArithmeticException& e)" << std::endl;
          std::cout << e.message() << std::endl;
          std::cout << e.location() << std::endl;
      }
      catch(const Exception& e)
      {
          //面向对象包含继承的兼容性赋值原则
          std::cout << "catch (const Exception& e)" << std::endl;
          std::cout << e.message() << std::endl;
          std::cout << e.location() << std::endl;
      }
  }
  ```



## 第十二课：顶层父类的创建

- 当代软件架构实践中的经验

  - 尽量使用单重继承的方式进行系统设计。
  - 尽量保持系统中只存在单一的继承树。
  - 尽量使用组合关系代替继承关系。

- 不幸的事实

  - C++语言的灵活性似的代码中可以存在多个继承树。
  - C++编译器的差异使得同样的代码可能表现出不同的行为。
  - new如果失败了会发生什么？
    - 返回空指针
    - 抛出一个标准库中的异常

- 创建DTLib::Object类的意义？

  - 遵循经典设计准则，所有的数据结构都继承自顶层父类。
  - 定义动态内存申请的行为，提高代码的可移植性。

- 顶层父类的接口定义：

- ```cpp
  class Object
  {
  public:
      void* operator new(unsigned int size) noexcept;
      void operator delete(void* p);
      void* operator new[](unsigned int size) noexcept;
      void operator delete[](void* p);
      //顶层类是抽象类型
      ~Object() = 0;
  };
  ```

- 编程实验：对于顶层父类的实现

- 于是下面是对于Object的实现代码

- ```cpp
  // OBJECT_H
  // Created by herryao on 4/4/24.
  //
  
  #ifndef DTLIB_OBJECT_H
  #define DTLIB_OBJECT_H
  #include <iostream>
  namespace DTLib 
  {
  
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
  
  ```

- 源码实现如下：

- ```cpp
  //
  // Created by herryao on 4/4/24.
  //
  
  #include "Object.h"
  #include <cstdlib>
  
  namespace DTLib
  {
      void *Object::operator new(size_t size) noexcept
      {
          std::cout << "Object::operator new: " << size << std::endl;
          return malloc(size);
      }
  
      void Object::operator delete(void *p)
      {
          std::cout << "Object::operator delete: " << p << std::endl;
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
  
  
  
  } // DTLIb
  ```

- 测试用代码，定义了两个继承自顶层父类Object的子类型。

- 测试了关于new和delete操作符的使用，确定了其没有调用默认的操作符号，防止了可能造成的异常抛出问题。

- 具体代码实现如下

- ```cpp
  #include <iostream>
  #include "Object.h"
  
  
  using namespace DTLib;
  
  
  class Test_OBJ : public Object
  {
  public:
      //vptr 8
      int i;  //4
      int j;  //4
      //8 + 4 + 4 = 16
  };
  
  class Child : public Test_OBJ
  {
  public:
      int k;  //4 >> 24
  //    int l;  //4 >> 24 多添加一个成员依旧是24 由此可见这个24来自于内存对齐
      //4 + 16 >> 内存空间对齐， 8 + 16 = 24
  };
  
  void test_4_obj();
  
  int main()
  {
      test_4_obj();
      return 0;
  }
  
  
  void test_4_obj(){
      Object* obj1 = new Test_OBJ;
      Object* obj2 = new Child;
  
      std::cout << "obj1: " << obj1 << std::endl;
      std::cout << "obj2: " << obj2 << std::endl;
  
      delete obj1;
      delete obj2;
  }
  ```

- Object类是DTLib中数据结构类的顶层父类。

- Object类用于统一动态内存申请的行为。

- 在堆中创建Object子类对象，失败时返回nullptr。

- Object类为纯虚父类，所有的子类都能进行动态类型的识别。

## 第十三课：类族结构的进化

- 遵循经典设计准则

  - DTLib库中的所有的类位于单一继承树。
  - 这样会使得内存的操作得到统一，提升代码的鲁棒性。
  - Object
    - Exception --- InvalidOperationException --- 防止非法操作
    - SmartPointer
    - DataStructure

- 改进的关键点：

  - Exception类继承自Object类
    - 堆空间中创建对象失败返回空指针，而不是抛出一个异常。
  - 新增一个InvalidOperationException异常类
    - 成员函数调用时，如果状态不正确则抛出这个异常。
  - SmartPointer类继承自Object类
    - 堆空间中创建对象失败返回空指针，而不是抛出一个异常。

- 编程实验：对于Exception类和SmartPointer类的升级，只展示声明

- ```cpp
  class Exception : public Object
  {
      //...
  };
  
  template<typename T>
  class SmartPointer : public Object
  {
      //...
  };
  ```

- 各种异常类的实现

- ```cpp
  //
  // DTLIB_EXCEPTION_H
  // Created by herryao on 4/4/24.
  //
  
  #ifndef DTLIB_EXCEPTION_H
  #define DTLIB_EXCEPTION_H
  #include "Object.h"
  
  //使用宏定义来简化代码
  //不需要重复写出文件名和行号
  #define THROW_EXCEPTION(e, m) (throw e(m, __FILE__, __LINE__))
  
  namespace DTLib
  {
      class Exception : public Object
      {
      protected:
          char* m_message;
          char* m_location;
  
          void init(const char* message, const char* file, int line);
      public:
          //构造函数
          Exception(const char* message);
          Exception(const char* file, int line);
          Exception(const char* message, const char* file, int line);
  
          //拷贝构造和拷贝赋值
          Exception(const Exception& e);
          Exception& operator= (const Exception& e);
  
          //返回当前信息，异常抛出地址
          virtual const char* message() const;
          virtual const char* location() const;
  
          //析构函数只要定义就一定要实现，即使是纯虚函数
          //析构函数最终一定会调用父类的析构函数
          virtual ~Exception() = 0;
      };
  
  
      class ArithmeticException : public Exception
      {
      public:
          ArithmeticException(): Exception(nullptr, nullptr, 0){}
          ArithmeticException(const char* message): Exception(message, nullptr, 0){}
          ArithmeticException(const char* file, int line): Exception(nullptr, file, line){}
          ArithmeticException(const char* message, const char* file, int line): Exception(message, file, line){}
  
          ArithmeticException(const ArithmeticException& e): Exception(e){}
          ArithmeticException& operator= (const ArithmeticException& e)
          {
              Exception::operator=(e);
              return *this;
          }
      };
  
      class InValidParameterException : public Exception
      {
      public:
          InValidParameterException(): Exception(nullptr, nullptr, 0){}
          InValidParameterException(const char* message): Exception(message, nullptr, 0){}
          InValidParameterException(const char* file, int line): Exception(nullptr, file, line){}
          InValidParameterException(const char* message, const char* file, int line): Exception(message, file, line){}
  
          InValidParameterException(const InValidParameterException& e): Exception(e){}
          InValidParameterException& operator= (const InValidParameterException& e)
          {
              Exception::operator=(e);
              return *this;
          }
          ~InValidParameterException() = default;
      };
  
      class NoEnoughMemoryException : public Exception
      {
      public:
          NoEnoughMemoryException(): Exception(nullptr, nullptr, 0){}
          NoEnoughMemoryException(const char* message): Exception(message, nullptr, 0){}
          NoEnoughMemoryException(const char* file, int line): Exception(nullptr, file, line){}
          NoEnoughMemoryException(const char* message, const char* file, int line): Exception(message, file, line){}
  
          NoEnoughMemoryException(const NoEnoughMemoryException& e): Exception(e){}
          NoEnoughMemoryException& operator= (const NoEnoughMemoryException& e)
          {
              Exception::operator=(e);
              return *this;
          }
          ~NoEnoughMemoryException() = default;
      };
  
      class InValidOperationException : public Exception
      {
      public:
          InValidOperationException(): Exception(nullptr, nullptr, 0){}
          InValidOperationException(const char* message): Exception(message, nullptr, 0){}
          InValidOperationException(const char* file, int line): Exception(nullptr, file, line){}
          InValidOperationException(const char* message, const char* file, int line): Exception(message, file, line){}
  
          InValidOperationException(const InValidOperationException& e): Exception(e){}
          InValidOperationException& operator= (const InValidOperationException& e)
          {
              Exception::operator=(e);
              return *this;
          }
          ~InValidOperationException() = default;
      };
  }
  #endif //DTLIB_EXCEPTION_H
  
  ```

- 优化后代码的测试用例

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  
  using namespace DTLib;
  //用于测试统一继承树代码
  void test_4_single_tree();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
      test_4_single_tree();
      return 0;
  }
  
  void test_4_single_tree()
  {
      auto sp = new SmartPointer<int>;
      delete sp;
      auto e = new InValidOperationException;
      delete e;
  }
  ```

- 输出结果如下：

- ```
  /home/herryao/cs/DT/datastructure/DTLIb/cmake-build-debug/DTLIb
  Object::operator new: 16
  Object::operator delete: 0x5b2eb1be62c0
  Object::operator new: 24
  Object::operator delete: 0x5b2eb1be62c0
  
  Process finished with exit code 0
  ```

- DTLib的开发方式和注意事项

  - 迭代开发

    - 每天完成一个小时的目标，持续开发，最终打造可服用类库。

  - 单一继承树

    - 所有的类都继承自Object，规范堆对象创建时的行为。

  - 只抛异常，不处理异常

    - 使用`THROW_EXCEPTION`抛出异常，提高可移植性。

    - 有些古代编译器不支持`try...catch...的使用`。

    - 如果不支持则改变宏如下，使得这个异常抛出变成一个空命令：

    - ```cpp
      #define THROW_EXCEPTION(e, m) //(throw e(m, __FILE__, __LINE__))
      ```

    - **很多公司命令禁止异常处理机制。**

  - 弱耦合性

    - 尽量不要使用标准库中的类和函数，提高可移植性（已经失败了，使用了std::string 中的函数，替代了itoa函数）
    - 有些公司命令禁止了标准库的使用。

## 第十四课：线性表的本质和操作

- 生活中的智慧：

  - 幼儿园老师总会让小朋友以相同的排队顺序出行。
  - 每个小朋友只需要记住自己前面的小朋友是谁。

- 线性表(List)的表现形式：

  - 零个或多个数据组成的元素。
  - 数据在位置上是有序的。
  - 数据元素个数是有限的。
  - 数据元素的类型必须相同。

- 线性表（List）的抽象定义

  - 线性表时具有相同类型的n个数据的有限数列。

- 线性表的性质

  - `a0`为线性表的第一个元素，只有一个后继。
  - `an-1`为线性表的最后一个元素，只有一个前驱。
  - 除去`a0`和`an-1`以外，既有前驱又有后继。
  - 支持逐项访问和顺序存取。

- 思考题，下面可以考虑为线性表的

  - 班级内同学之间的友谊关系（图）
  - 公司中的上下级关系（树）
  - 冬天图书馆用物品排队占座（不可以用线性表，因为不满足相同数据的元素类型）
  - 花名册上名字之间的关系（不一定）

- 问题：

  - 线性表只是一个单纯的概念吗？
  - 如何在程序中实现一个线性表？

- 线性表的常用操作：

  - 插入元素
  - 删除元素
  - 获取目标位置元素
  - 设置目标元素的值
  - 获取线性表长度
  - 清空线性表

- 线性表在程序中表现为一种特殊的数据类型

- ```cpp
  template<typename T>
  class List:public Object
  {
  public:
  	virtual bool insert(int i, const T& e) = 0;
      virtual bool remove(int i) = 0;
      virtual bool set(int i, const T&e) = 0;
      virtual bool get(int i, T&e) const= 0;
      virtual int length() const = 0;
      virtual void clear() = 0;
  };
  ```

- 编程实验：

- 建立一个顶层的抽象父类用于继承。

- ```cpp
  /*
   * LIST_H
   * Created by herryao on 4/11/24.
   * Email: stevenyao@g.skku.edu
   * Sungkyunkwan Univ. Nano Particle Technology Lab(NPTL)
   * 
   */
  
  #ifndef DTLIB_LIST_H
  #define DTLIB_LIST_H
  
  #include "Object.h"
  namespace DTLib {
  
  template<typename T>
  class List :public Object
  {
  public:
    virtual bool insert(int i, const T& e) = 0;
    virtual bool remove(int i) = 0;
    virtual bool set(int i, const T& e) = 0;
    virtual bool get(int i, T& e) const = 0;
    virtual int length() const  = 0;
    virtual void clear() = 0;
  };
  
  } // namespace DTLib
  
  #endif // DTLIB_LIST_H
  
  ```

- 在main函数中进行相应的测试

- ```cpp
  #include <iostream>
  #include "List.h"
  
  void test_4_list_00();
  
  int main()
  {
      test_4_list_00();
      return 0;
  }
  
  
  void test_4_list_00()
  {
      List<int>* l = nullptr;
  }
  ```

- 小结

  - 线性表时数据元素的有序并且有限的集合
  - 线性表中的数据必须是类型相同的
  - 线性表可用于描述排队关系的问题
  - 线性表在程序中表现为一种特殊的数据类型
  - 线性表在C++中表现为一个抽象类



## 第十五课：线性表的顺序存储结构

- 上一节只实现了一个抽象类，并无实际作用

- 顺序存储的定义

  - 线性表的顺序存储结构，值得使用一段地址连续的存储单元依次存储线性表中的数据元素（原生数组）。

- 设计思路

  - 可以用一维数组来实现顺序存储结构

    - 存储空间 	`T* m_array;`

    - 当前长度 	`int m_length;`

    - ```cpp
      template<typename T>
      class SeqList: public List
      {
      protected:
      	int m_length;
          T* m_array;
          //...
      };
      ```

  - 顺序存储结构的元素获取操作

    - 判断目标位置是否合法

    - 将目标位置作为数组小表获取元素

    - ```cpp
      bool SeqList<T>::get(int i, T& e)const
      {
          bool ret = ((0 <= i)&&(i < this->m_length));
          if(ret)
          {
              e = this->m_array[i];
          }
          return ret;
      }
      ```

  - 顺序存储结构的元素插入操作

    - 判断目标位置是否合法

    - 将目标之后的所有元素后移一个位置

    - 将新元素插入目标位置

    - 线性表长度加一

    - ```c++
      bool SeqList<T>::insert(int i, const T &e)
      {
      	bool ret = ((0 <= i)&&(i <= this->m_length));
      	ret = ret&&(this->m_length+1 <= this->capacity());
      	if(ret)
      	{
      		for(int p=this->m_length-1; p>=i; ++p)
      		{
      			this->m_array[p+1] = this->m_array[p];
      		}
      		this->m_array[i] = e;
      		this->m_length++;
      	}
      	return ret;
      }
      ```
    
  - 顺序存储结构的元素删除
  
    - 判断目标位置是否合法
  
    - 将目标位置之后的所有元素向前移动一个位置
  
    - 将线性表的长度减一
  
    - ```cpp
      bool SeqList<T>::remove(int i)
      {
          bool ret = ((0 <= i)&&(i < this->m_length));
          if(ret)
          {
              for(int p = i; p < this->m_length-1; p++)
              {
                  this->m_array[p] = this->m_array[p+1];
              }
              this->m_length--;
          }
          return ret;
      }
      ```
  
- 实战预告

  - Object -> List -> SeqList（抽象类）
    - ->StaticList
    - ->DynamicList



## 第十六课：顺序存储结构的抽象实现

- Object -> List -> SeqList（抽象类）

- 因为在SeqList类中，顺序存储空间的开辟由子类完成

- SeqList设计要点

  - 抽象类模板，存储空间的位置和大小由子类设计完成
  - 实现顺序存储结构线性表的关键操作（增，删，查，等）
  - 提供数组操作符，方便快速获取元素

- ```cpp
  template<typename T>
  class SeqList : public List<T>
  {
  protected:
  	int m_length;	//顺序表的长度
      T* m_array; 	//顺序表的数组空间
  public:
      bool insert(int i, const T& e);
      bool remove(int i);
      bool set(int i, const T& e);
      bool get(int i, T& e) const;
      int length() const;
      void clear();
      
      //数组访问方式，const类型以及普通类型
      T& operator[](int i);
      T operator[](int i) const;
      //顺序存储空间的容量
      virtual int capacity() const = 0;
  };
  ```

- 编程实验，构建SeqList.h

- ```cpp
  /* 
   * SeqList.H
   * Created by herryao on 4/11/24.
   * Email: stevenyao@g.skku.edu
   * Sungkyunkwan Univ. Nano Particle Technology Lab(NPTL)
   */
  
  #ifndef DTLIB_SEQLIST_H
  #define DTLIB_SEQLIST_H
  
  #include "List.h"
  
  namespace DTLib
  {
  	template<typename T>
  	class SeqList: public List<T>
  	{
  	protected:
  		int m_length;
  		T* m_array;
  
  	public:
  		bool insert(int i, const T& e)
  		{
  			bool ret = ((0 <= i)&&(i<=this->m_length));
  			ret = ret && (this->m_length + 1 <= this->capacity());
  			if(ret)
  			{
  				for(int p=this->m_length-1; p>=i; p--)
  				{
  					this->m_array[p+1] = this->m_array[p];
  				}
  				this->m_length++;
  				this->m_array[i] = e;
  			}
  			return ret;
  		}
  
  		bool remove(int i)
  		{
  			bool ret = ((i>=0)&&(i<this->m_length));
  			if(ret)
  			{
  				for(int p=i; p<this->m_length-1; p++)
  				{
  					this->m_array[p] = this->m_array[p+1];
  				}
  				this->m_length--;
  			}
  			return ret;
  		}
  
  		bool get(int i, T& e) const
  		{
  			bool ret = ((i>=0)&&(i<this->m_length));
  			if(ret)
  			{
  				e = this->m_array[i];
  			}
  			return ret;
  		}
  
  		bool set(int i, const T& e)
  		{
  			bool ret = ((i>=0)&&(i<this->m_length));
  			if(ret)
  			{
  				this->m_array[i] = e;
  			}
  			return ret;
  		}
  
  
  		[[nodiscard]] int length() const
  		{
  			return this->m_length;
  		}
  
  		T& operator[](int i)
  		{
  			if((i>=0)&&(i<this->m_length))
  			{
  				return this->m_array[i];
  			}
  			THROW_EXCEPTION(IndexOutOfBoundsException, "Parameter i is invalid ...");
  		}
  
  		T operator[](int i) const
  		{
  			//excluding repetitive coding
  			return (const_cast<SeqList<T&>> (*this))[i];
  		}
  
  		virtual int capacity() const = 0;
  	};
  }
  
  #endif //DTLIB_SEQLIST_H
  
  ```

- 测使用代码，无法直接创建抽象类的对象，但是可以创建一个指针

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  #include "List.h"
  #include "SeqList.h"
  
  void test_4_SeqList_00();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
  //    test_4_single_tree();
  //	test_4_list_00();
  	test_4_SeqList_00();
  	return 0;
  }
  
  
  void test_4_SeqList_00()
  {
  	SeqList<int>* pseq = nullptr;
  }
  
  ```

- Object -> List -> SeqList（抽象类）

  - ->StaticList
  - ->DynamicList

- 思考：`StaticList` 和`DynamicList`如何实现？差异在哪里？是否可以将DynamicList作为StaticList的子类进行实现？



## 第十七课：StaticList和DynamicList的实现

- 课程目标

  - 完成StaticList
  - 完成DynamicList

- StaticList设计要点

- 类模板

  - 使用原生数组作为顺序存储空间

  - 使用模板参数决定数组大小

  - ```cpp
    template<typename T, int N>
    class StaticList: public SeqList<T>
    {
    protected:
    	T m_space[N];	//顺序存储空间，N为模板参数，静态链接到一个固定大小的数组    
    public:
        staticList();	//指定父类成员的具体值
        int Capacity() const;
    };
    ```

- 编程实验一：StaticList的代码实现

- ```cpp
  //
  // StaticList.H
  // Created by herryao on 4/11/24.
  //
  
  #ifndef DTLIB_STATICLIST_H
  #define DTLIB_STATICLIST_H
  #include "SeqList.h"
  
  namespace DTLib
  {
  	template<typename T, int N>
  	class StaticList: public SeqList<T>
  	{
  	protected:
  		T m_space[N];
  	public:
  		StaticList();
  		int capacity() const;
  	};
  
  	template<typename T, int N>
  	int StaticList<T, N>::capacity() const {
  		return N;
  	}
  
  	template<typename T, int N>
  	StaticList<T, N>::StaticList() {
  		this->m_array = this->m_space;
  		this->m_length = 0;
  	}
  }
  #endif //DTLIB_STATICLIST_H
  
  ```

- 测试代码如下，测试了对象的实例化，列表元素的增加，列表元素的下标访问法，以及越界访问情况下的异常抛出问题

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  #include "List.h"
  #include "SeqList.h"
  #include "StaticList.h"
  
  void test_4_StaticList_00();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
  //    test_4_single_tree();
  //	test_4_list_00();
  //	test_4_SeqList_00();
  	test_4_StaticList_00();
  	return 0;
  }
  
  void test_4_StaticList_00()
  {
  	StaticList<int, 5> l;
  	for (int i = 0; i < l.capacity(); ++i)
  	{
  		l.insert(0, i);
  	}
  
  	for (int i = 0; i < l.length(); ++i)
  	{
  		std::cout << l[i] << "\t";
  	}
  	std::cout << "\n===========\n";
  	l[0] *= l[0];
  
  	for (int i = 0; i < l.length(); ++i)
  	{
  		std::cout << l[i] << "\t";
  	}
  
  	std::cout << "\n===========\n";
  
  	try
  	{
  		l[5] = 5;
  	}
  	catch(const Exception& e)
  	{
  		std::cout << e.message() << std::endl;
  		std::cout << e.location() << std::endl;
  	}
  }
  ```

- DynamicList的实现要点

- 类模板

  - 申请连续堆空间作为顺序存储空间
  - 动态设置顺序存储空间的大小
  - 保证重置顺序存储空间时的异常安全性

- 异常安全的概念

  - 不泄漏任何资源
  - 不允许破坏数据

- 函数异常安全的基本保证

  - 如果异常被抛出
    - 对象内的任何成员仍能保持有效状态
    - 没有数据的破坏及资源泄漏 

- ```cpp
  template<typename T>
  class DynamicList: public SeqList<T >
  {
  protected:
      int m_capacity;	//顺序存储空间的大小
  public:
      DynamicList(int capacity);	//构造函数，申请空间
      int Capacity() const;
      void resize(int capacity);
      ~DynamicList();	//归还空间
  };
  ```

- 编程实验二：DynamicList的实现：

- ```cpp
  // DynamicList.H
  // Created by herryao on 4/11/24.
  //
  
  #ifndef DTLIB_DYNAMICLIST_H
  #define DTLIB_DYNAMICLIST_H
  #include "SeqList.h"
  #include "Exception.h"
  
  namespace DTLib
  {
  	template <typename T>
  	class DynamicList: public SeqList<T>
  	{
  	protected:
  		int m_capacity;
  	public:
  		DynamicList(int capacity);
  		[[nodiscard]] int capacity() const;
  		void resize(int capacity);
  		~DynamicList();
  	};
  
  	template<typename T>
  	DynamicList<T>::~DynamicList() {
  		if(this->m_array)
  		{
  			delete [] this->m_array;
  			this->m_capacity = this->m_length = 0;
  		}
  
  	}
  
  	template<typename T>
  	void DynamicList<T>::resize(int capacity) {
  		if(capacity != this->m_capacity)
  		{
  			int length = capacity > this->m_length ? this->m_length : capacity;
  			T* array = new T[capacity];
  			if(temp)
  			{
  				for(int i=0; i<length; ++i)
  				{
  					array[i] = this->m_array[i];
  				}
  				T* temp = this->m_array;
  				this->m_array = array;
  				this->m_length = length;
  				this->m_capacity = capacity;
                  //delete放在最后的原因是为了防止元素调用析构函数激发异常抛出，在异常被抛出时不会影响对象内的成员赋值。
  				delete []temp;
  			}
  			else
  			{
  				THROW_EXCEPTION(NoEnoughMemoryException, "No memory to resize DynamicList object...");
  			}
  		}
  	}
  
  	template<typename T>
  	int DynamicList<T>::capacity() const {
  		return this->m_capacity;
  	}
  
  	template<typename T>
  	DynamicList<T>::DynamicList(int capacity) {
  		this->m_array = new T[capacity];
  		if(this->m_array)
  		{
  			this->m_capacity = capacity;
  			this->m_length = 0;
  		}
  		else
  			THROW_EXCEPTION(NoEnoughMemoryException, "No memory to create DynamicList object ...");
  	}
  }
  
  
  #endif //DTLIB_DYNAMICLIST_H
  
  ```

- 测试函数如下：

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  #include "List.h"
  #include "SeqList.h"
  #include "StaticList.h"
  #include "DynamicList.h"
  
  
  using namespace DTLib;
  
  void test_4_DynamicList_00();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
  //    test_4_single_tree();
  //	test_4_list_00();
  //	test_4_SeqList_00();
  //	test_4_StaticList_00();
  	test_4_DynamicList_00();
  	return 0;
  }
  
  void test_4_DynamicList_00()
  {
  	DynamicList<int> l(5);
  	for (int i = 0; i < l.capacity(); ++i)
  	{
  		l.insert(0, i);
  	}
  
  	for (int i = 0; i < l.length(); ++i)
  	{
  		std::cout << l[i] << "\t";
  	}
  	std::cout << "\n===========\n";
  	l[0] *= l[0];
  
  	for (int i = 0; i < l.length(); ++i)
  	{
  		std::cout << l[i] << "\t";
  	}
  
  	std::cout << "\n===========\n";
  
  	try
  	{
  		l[5] = 5;
  	}
  	catch(const Exception& e)
  	{
  		std::cout << e.message() << std::endl;
  		std::cout << e.location() << std::endl;
  		l.resize(10);
  		l.insert(5, 10);
  	}
  
  	for (int i = 0; i < l.length(); ++i)
  	{
  		std::cout << l[i] << "\t";
  	}
  
  	std::cout << "\n===========\n";
  	
  	try
  	{
  		l[5] = 5;
  	}
  	catch(const Exception& e)
  	{
  		std::cout << e.message() << std::endl;
  		std::cout << e.location() << std::endl;
  //		l.resize(10);
  	}
  	for (int i = 0; i < l.length(); ++i)
  	{
  		std::cout << l[i] << "\t";
  	}
  
  	std::cout << "\n===========\n";
  }
  ```

- 问题？是否可以将DynamicList作为StaticList的子类实现呢？ 不可以

- 小结：

  - StaticList通过模板参数定义顺序存储空间
  - DynamicList通过动态内存申请定义顺序存储空间
  - DynamicList支持动态重置顺序存储空间的大小
  - DynamicList中的resize()函数实现需要保证异常安全性



## 第十八课：顺序存储线性表的分析

- 效率分析：

  - ```cpp
    template<typename T>
    class SeqList : public List<T>
    {
    protected:
    	int m_length;	//顺序表的长度
        T* m_array; 	//顺序表的数组空间
    public:
        bool insert(int i, const T& e);	//O(n)
        bool remove(int i);				//O(n)
        bool set(int i, const T& e);	//O(1)
        bool get(int i, T& e) const;	//O(1)
        int length() const;				//O(1)
        void clear();					//O(1)
        
        //数组访问方式，const类型以及普通类型
        T& operator[](int i);			//O(1)
        T operator[](int i) const;		//O(1)
        //顺序存储空间的容量
        virtual int capacity() const = 0;
    };
    ```

  - 最耗时的操作是插入和删除操作。

  - 问题：

    - 长度相同的两个SeqList，插入和删除操作的平均耗时是否相同呢？
    - 同元素的数据类型相关。
    - 基于顺序表的数据结构不是和存储类类型的元素。

- 下面代码是否正确？为什么？

  - ```cpp
    StaticList<int*, 5> s1;
    StaticList<int*, 5> s2;
    
    for(int i=0; i<s1.capacity(); i++)
    {
        s1.insert(0, new int(i));
    }
    
    s2 = s1; //copy assignment
    
    for(int i=0; i<s1.capacity(); i++)
    {
        delete s1[i];
        delete s2[i];	//重复释放相同的堆空间，造成未定义问题
    }
    ```

- 下面代码是否正确？为什么？

  - ```cpp
    void func()
    {
        DynamicList<int> d1(5);
        DynamicList<int> d2 = d1;	//copy constructor
        for(int i=0; i<d1.capacity(); i++)
        {
            d1.insert(i, i);
            d2.insert(i, i*i);	//很快就会超过capacity，因为插入了两次
        }
        
        for(int i=0; i<d1.length(); i++)
        {
            std::cout << d1[i] << std::endl;
        }
        //程序结束后，析构函数分别调用，堆内存会释放两次
    }
    ```

- 分析：对于容器类型的类，可以考虑禁用拷贝构造和赋值操作

  - ```cpp
    template<typename T>
    class List: public Object
    {
    protected:
        List(const List& other);
        List& operator=(const List& other);
        //...
    }
    ```

- 对于数据结构库的优化：

  - 仅修改顶层父类List中的代码即可

  - 将拷贝构造和拷贝赋值的函数声明为protected

  - 当拷贝构造和拷贝赋值被定义，默认构造函数将不存在必须手动声明

  - 优化后的List.h文件结果如下

  - ```cpp
    /*
     * LIST_H
     * Created by herryao on 4/11/24.
     * Email: stevenyao@g.skku.edu
     * Sungkyunkwan Univ. Nano Particle Technology Lab(NPTL)
     *
     */
    
    #ifndef DTLIB_LIST_H
    #define DTLIB_LIST_H
    
    #include "Object.h"
    #include "Exception.h"
    namespace DTLib {
    
    	template<typename T>
    	class List :public Object
    	{
    	protected:
    		//禁用拷贝构造和拷贝赋值操作
    		List(const List& other);
    		List& operator=(const List& other);
    	public:
    		List() = default;
    		virtual bool insert(int i, const T& e) = 0;
    		virtual bool remove(int i) = 0;
    		virtual bool set(int i, const T& e) = 0;
    		virtual bool get(int i, T& e) const = 0;
    		virtual int length() const  = 0;
    		virtual void clear() = 0;
    	};
    
    } // namespace DTLib
    
    #endif // DTLIB_LIST_H
    
    ```

  - 测试用代码，测试结果造成未定义操作，禁用成功

  - ```cpp
    #include <iostream>
    
    #include "SmartPointer.h"
    #include "Exception.h"
    #include "Object.h"
    #include "List.h"
    #include "SeqList.h"
    #include "StaticList.h"
    #include "DynamicList.h"
    
    
    using namespace DTLib;
    void test_4_cp_List();
    
    int main()
    {
    //    test_4_sp();
    //    test_4_exception();
    //    test_4_obj();
    //    test_4_single_tree();
    //	test_4_list_00();
    //	test_4_SeqList_00();
    //	test_4_StaticList_00();
    //	test_4_DynamicList_00();
    	test_4_cp_List();
    	return 0;
    }
    
    void test_4_cp_List() {
    	DynamicList<int> l(5);
    	DynamicList<int> p = l;
    	//编译出错
    }
    
    ```

  - 优化一个尾插法，在List抽象类中重新定义一个重载函数，并在SeqList抽象类中进行实现，直接重载并调用insert方法

  - ```cpp
    //List.H
    template<typename T>
    class List :public Object
    {
    public:
    	virtual bool insert(const T& e) = 0;	
    };
    
    //SeqList.H
    template<typename T>
    bool SeqList<T>::insert(const T &e) {
    	return insert(this->m_length, e);
    }
    ```

  - 测试代码如下：

  - ```cpp
    #include <iostream>
    
    #include "SmartPointer.h"
    #include "Exception.h"
    #include "Object.h"
    #include "List.h"
    #include "SeqList.h"
    #include "StaticList.h"
    #include "DynamicList.h"
    
    
    using namespace DTLib;
    
    void test_4_insert_back();
    
    int main()
    {
    //    test_4_sp();
    //    test_4_exception();
    //    test_4_obj();
    //    test_4_single_tree();
    //	test_4_list_00();
    //	test_4_SeqList_00();
    //	test_4_StaticList_00();
    //	test_4_DynamicList_00();
    //	test_4_cp_List();
    	test_4_insert_back();
    	return 0;
    }
    
    void test_4_insert_back()
    {
    	DynamicList<int> d(5);
    	for(int i=0; i<d.capacity(); ++i)
    	{
    		d.insert(i);
    	}
    	for (int i = 0; i < d.length(); ++i)
    	{
    		std::cout << d[i] << "\t";
    	}
    }
    ```

- 下面代码正确么？为什么？

- ```cpp
  int main()
  {
      StaticList<int, 5> list;
      for (int i = 0; i < list.capacity(); ++i)
  	{
  		list[i] = i*i;
  	}
      return 0;
  }
  ```

- 问题分析：顺序存储结构线性表提供了数组操作符号的重载，通过重载能够快捷方便的获取目标位置处的数据元素，在具体的使用形势上类似数组，但是由于本质不同不可以代替数组使用。

- 不正确，会抛出越界异常，线性表绝对不可以当作数组来使用，必须先`insert()` 插入元素才可以`[]`访问元素。

- 实战预告：数组类开发

- Object -> Array

  - ->StaticArray
  - ->DynamicArray

- 小结
  - 顺序存储线性表的插入和删除操作存在重大效率隐患。
  - 线性表作为容器类，应当避免拷贝构造和拷贝赋值。
  - 顺序存储线性表可能被当成数组误用。
  - 工程开发中可以考虑使用数组类代替原声数组使用（下一课内容）。

## 第十九课：数组类的创建（上）

- 课程目标

  - 完成Array类的具体实现（抽象类）
  - 完成StaticArray类的具体实现

- 需求分析

  - 创建数组类代替原生数组的使用（优化）
    - 数组类包含长度信息
    - 数组类能够主动发现越界访问

- 数组类同顺序表的区别

  - 数组是可以相互复制的
  - 数组不需要先插入元素即可使用下标访问符重载

- Array设计要点

  - 抽象类模板，存储空间的位置和大小由子类完成
  - 重载数组操作符，判断下标是否合法
  - 提供数组长度的抽象访问函数
  - 提供数组对象间的复制操作

- Array类的接口声明

- ```cpp
  template<typename T>
  class Array: public Object
  {
  protected:
      T* m_array;
  public:
      virtual bool set(int i, const T& e);
      virtual bool get(int i, T& e) const;
      virtual int length() const = 0;
      //数组类访问符号重载
      T operator [](int i) const;
      T& operator [](int i);
  }
  ```

- 编程实验一：数组抽象类的实现Array.h

- ```cpp
  /**
    ******************************************************************************
    * @file           : Array.h
    * @author         : herryao
    * @brief          : None
    * @attention      : None
    * @date           : 4/13/24
    ******************************************************************************
    */
  
  
  
  #ifndef DTLIB_ARRAY_H
  #define DTLIB_ARRAY_H
  #include "Object.h"
  #include "Exception.h"
  
  namespace DTLib
  {
  	template <typename T>
  	class Array: public Object
  	{
  	protected:
  		T* m_array;
  	public:
  		virtual bool set(int i, const T& e);
  		virtual bool get(int i, T& e) const;
  		virtual int length() const = 0;
  
  		T operator[] (int i) const;
  		T& operator[] (int i);
  	};
  
  
  	template <typename T>
  	bool Array<T>::set(int i, const T& e)	//o(1)
  	{
  		bool ret = ((i >= 0) && (i < this->length()));
  		if(ret)
  		{
  			this->m_array[i] = e;
  		}
  		return ret;
  	}
  
  	template<typename T>
  	bool Array<T>::get(int i, T &e) const	//o(1)
  	{
  		bool ret = ((i >= 0) && (i < this->length()));
  		if(ret)
  		{
  			e = this->m_array[i];
  		}
  		return ret;
  	}
  
  	template<typename T>
  	T& Array<T>::operator [](int i)	//o(1)
  	{
  		bool ret = ((i >= 0) && (i < this->length()));
  		if(ret)
  		{
  			return this->m_array[i];
  		}
  		else
  		{
  			THROW_EXCEPTION(IndexOutOfBoundsException, "failed in access the array element using index ...");
  		}
  	}
  
  	template<typename T>
  	T Array<T>::operator [](int i) const	//o(1)
  	{
  		//for simplicity
  //		bool ret = ((i >= 0) && (i < this->length()));
  //		if(ret)
  //		{
  //			return this->m_array[i];
  //		}
  //		else
  //		{
  //			THROW_EXCEPTION(IndexOutOfBoundsException, "failed in access the array element using index ...");
  //		}
  		return (const_cast<Array<T>&>(*this))[i];
  	}
  
  
  }
  
  #endif //DTLIB_ARRAY_H
  
  ```

- StaticArray的设计要点

- 类模板

  - 封装原生数组
  - 使用模板参数决定数组大小
  - 实现函数返回数组长度
  - 拷贝构造和拷贝赋值（原生数组不存在此操作）

- StaticArray类的接口声明

- ```cpp
  template<typename T, int N>
  class StaticArray: public Array
  {
  protected:
      T m_space[N];
      
  public:
      //constructor
      StaticArray();
      //copy constructor
      StaticArray(const StaticArray<T, N>& obj);
      //copy assign
      StaticArray<T, N>& operator = (const StaticArray<T, N> & obj);
      int length() const;
  };
  ```

- 编程实验二：静态数组类的实现StaticArray.h

- ```cpp
  /**
    ******************************************************************************
    * @file           : StaticArray.h
    * @author         : herryao
    * @brief          : None
    * @email          : stevenyao@g.skku.edu
    * @date           : 4/13/24
    ******************************************************************************
    */
  
  #ifndef DTLIB_STATICARRAY_H
  #define DTLIB_STATICARRAY_H
  #include "Array.h"
  
  namespace DTLib
  {
      template<typename T, int N>
      class StaticArray: public Array<T>
      {
      protected:
         T m_space[N];
  
      public:
         //constructor
         StaticArray()  //O(1)
         {
            this->m_array = this->m_space;
         }
         //copy constructor
         StaticArray(const StaticArray<T, N>& obj)  //O(n)
         {
            this->m_array = this->m_space;
            for(int i=0; i<N; ++i)
            {
               this->m_space[i] = obj.m_space[i];
            }
         }
         //copy assign
         StaticArray<T, N>& operator = (const StaticArray<T, N> & obj)  //O(n)
         {
            if(this != &obj)
            {
               for(int i=0; i<N; ++i)
               {
                  this->m_space[i] = obj.m_space[i];
               }
            }
            return *this;
         }
         int length() const //O(1)
         {
            return N;
         }
      };
  }
  #endif //DTLIB_STATICARRAY_H
  ```

- 测使用代码，测试了建立，拷贝以及越界访问

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  #include "List.h"
  #include "SeqList.h"
  #include "StaticList.h"
  #include "DynamicList.h"
  #include "StaticArray.h"
  
  
  using namespace DTLib;
  void test_4_static_array();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
  //    test_4_single_tree();
  //	test_4_list_00();
  //	test_4_SeqList_00();
  //	test_4_StaticList_00();
  //	test_4_DynamicList_00();
  //	test_4_cp_List();
  //	test_4_insert_back();
  	test_4_static_array();
  
  	return 0;
  }
  
  void test_4_static_array()
  {
  	StaticArray<int, 5> s1;
  	for(int i=0; i<s1.length(); ++i)
  	{
  		s1[i] = i*i;
  	}
  
  	for(int i=0; i<s1.length(); ++i)
  	{
  		std::cout << s1[i] << std::endl;
  	}
  
  	StaticArray<int, 5> s2;
  	s2 = s1;
  	std::cout << "after copy construction: s2\n";
  	for(int i=0; i<s2.length(); ++i)
  	{
  		std::cout << s2[i] << std::endl;
  	}
  	std::cout << "test for out of bound" << std::endl;
  	s2[6] = 100;
  }
  ```

- 实战预告

  - 如何实现DynamicArray？
  - DynamicArray和StaticArray之间的差异在哪里？

## 第二十课：数组类的创建（下）

- StaticArray在创建时必须明确指定数组的大小

- 解决方案：DynamicArray，动态指定数组的大小

- DynamicArray设计要点

- 类模板

  - 动态确定内部数组空间的大小（堆）
  - 实现函数返回数组长度
  - 拷贝构造和拷贝赋值

- DynamicArray类的声明

- ```cpp
  template<typename T>
  class DynamicArray: public Array<T>
  {
  protected:
      int m_length;
  public:
      //constructor
      DynamicArray(int length);
      //copy constructor
      DynamicArray(const DynamicArray<T>& obj);
      //copy assign
      DynamicArray<T>& operator = (const DynamicArray<T>& obj);
      int length()const;
      void resize(int length);	//dynamic assign the length of array
      //destructor
      ~DynamicArray();
  }
  ```

- 编程实验一：动态数组类的实现DynamicArray.h

- ```cpp
  /**
    ******************************************************************************
    * @file           : DynamicArray.h
    * @author         : herryao
    * @brief          : None
    * @email          : stevenyao@g.skku.edu
    * @date           : 4/13/24
    ******************************************************************************
    */
  
  #ifndef DTLIB_DYNAMICARRAY_H
  #define DTLIB_DYNAMICARRAY_H
  #include "Array.h"
  namespace DTLib
  {
  	template<typename T>
  	class DynamicArray: public Array<T>
  	{
  	protected:
  		int m_length;
  	public:
  		DynamicArray(int length);
  		DynamicArray(const DynamicArray<T>& obj);
  		DynamicArray<T>& operator =(const DynamicArray<T>& obj);
  		int length() const;
  		void resize(int length);
  		~DynamicArray();
  	};
  
  	template<typename T>
  	DynamicArray<T>::~DynamicArray()
  	{
  		if(this->m_array != nullptr)
  		{
  			delete []this->m_array;
  			this->m_array = nullptr;
  			this->m_length = 0;
  		}
  	}
  
  	template<typename T>
  	void DynamicArray<T>::resize(int length)
  	{
  		if(this->length() != length)
  		{
  			int new_length = length < this->length() ? length : this->length();
  			T *array = new T[length];
  			if(array != nullptr)
  			{
  				for(int i=0; i<new_length; ++i)
  				{
  					array[i] = this->m_array[i];
  				}
  				T* temp = this->m_array;
  				this->m_array = array;
  				this->m_length = length;
  				delete []temp;	//safe in exception
  			}
  			else
  			{
  				THROW_EXCEPTION(NoEnoughMemoryException, "failed in allocate memory in resize of DynamicArray...");
  			}
  		}
  
  	}
  
  	template<typename T>
  	int DynamicArray<T>::length() const
  	{
  		return this->m_length;
  	}
  
  	template<typename T>
  	DynamicArray<T> &DynamicArray<T>::operator=(const DynamicArray<T>& obj) {
  		if(this != &obj)
  		{
  			T* array = new T[obj.length()];
  			if(array != nullptr)
  			{
  				for(int i=0; i<obj.length(); ++i)
  				{
  					array[i] = obj[i];
  				}
  				T* temp = this->m_array;
  
  				this->m_length = obj.length();
  				this->m_array = array;
  
  				delete []temp;	//safe in exception
  			}
  			else
  			{
  				THROW_EXCEPTION(NoEnoughMemoryException, "failed in copy assignment of DynamicArray...");
  			}
  
  		}
  		return *this;
  	}
  
  	template<typename T>
  	DynamicArray<T>::DynamicArray(const DynamicArray<T> &obj)
  	{
  		this->m_array = new T[obj.length()];
  		if(this->m_array != nullptr)
  		{
  			for(int i=0; i<obj.length(); ++i)
  			{
  				this->m_array[i] = obj.m_array[i];
  			}
  			this->m_length = obj.length();
  		}
  		else
  		{
  			THROW_EXCEPTION(NoEnoughMemoryException, "failed in copy constructor of DynamicArray...");
  		}
  
  	}
  
  	template<typename T>
  	DynamicArray<T>::DynamicArray(int length)
  	{
  		this->m_array = new T[length];
  		if(this->m_array != nullptr)
  		{
  			this->m_length = length;
  		}
  		else
  		{
  			THROW_EXCEPTION(NoEnoughMemoryException, "failed in constructor of DynamicArray...");
  		}
  	}
  }
  
  
  #endif //DTLIB_DYNAMICARRAY_H
  ```

- 用于测试的代码如下：在StaticArray的基础上增加了对于resize方法的测试。

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  #include "List.h"
  #include "SeqList.h"
  #include "StaticList.h"
  #include "DynamicList.h"
  #include "StaticArray.h"
  #include "DynamicArray.h"
  
  
  using namespace DTLib;
  void test_4_dynamic_array();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
  //    test_4_single_tree();
  //	test_4_list_00();
  //	test_4_SeqList_00();
  //	test_4_StaticList_00();
  //	test_4_DynamicList_00();
  //	test_4_cp_List();
  //	test_4_insert_back();
  //	test_4_static_array();
  	test_4_dynamic_array();
  
  	return 0;
  }
  
  void test_4_dynamic_array()
  {
  	DynamicArray<int> s1(5);
  	for(int i=0; i<s1.length(); ++i)
  	{
  		s1[i] = i*i;
  	}
  
  	for(int i=0; i<s1.length(); ++i)
  	{
  		std::cout << s1[i] << std::endl;
  	}
  
  	DynamicArray<int> s2(10);
  	s2 = s1;
  	std::cout << "after copy construction: s2\n";
  	for(int i=0; i<s2.length(); ++i)
  	{
  		std::cout << s2[i] << std::endl;
  	}
  	s2.resize(8);
  	std::cout << "test for out of bound" << std::endl;
  	s2[6] = 100;
  	for(int i=0; i<s2.length(); ++i)
  	{
  		std::cout << s2[i] << std::endl;
  	}
  }
  
  ```

- 编程实验二：对于重复逻辑的优化

  - resize() 函数和赋值操作符号重载
  - resize() 函数和拷贝构造函数

- 重复代码逻辑的抽象：函数应当属于保护权限下，不做对外接口

  - init()
    - 对象构造时的初始化操作
  - copy()
    - 在堆空间中申请新的内存，并执行拷贝操作
  - update()
    - 将指定的堆空间作为内部存储数组使用

- 优化之后的代码结果如下：

- ```cpp
  /**
    ******************************************************************************
    * @file           : DynamicArray.h
    * @author         : herryao
    * @brief          : None
    * @email          : stevenyao@g.skku.edu
    * @date           : 4/13/24
    ******************************************************************************
    */
  
  #ifndef DTLIB_DYNAMICARRAY_H
  #define DTLIB_DYNAMICARRAY_H
  #include "Array.h"
  namespace DTLib
  {
  	template<typename T>
  	class DynamicArray: public Array<T>
  	{
  	protected:
  		int m_length;
  
  		T* copy(T* array, int len, int newlen)		//	O(min(len, newlen)) = O(n)
  		{
  			T* ret = new T[newlen];
  			if(ret != nullptr)
  			{
  				int size = len < newlen ? len : newlen;
  				for(int i=0; i<size; ++i)
  				{
  					ret[i] = array[i];
  				}
  			}
  			else
  			{
  				THROW_EXCEPTION(NoEnoughMemoryException, "Failed in copy operation of DynamicArray...");
  			}
  			return ret;
  		}
  
  		void init(T* array, int length)		//O(1)
  		{
  			if(array != nullptr)
  			{
  				this->m_array = array;
  				this->m_length = length;
  			}
  			else
  			{
  				THROW_EXCEPTION(NoEnoughMemoryException, "Failed in construction of DynamicArray...");
  			}
  		}
  
  		void update(T* array, int length)		//O(1)
  		{
  			if(array != nullptr)
  			{
  				T* temp = this->m_array;
  
  				this->m_length = length;
  				this->m_array = array;
  
  				delete []temp;
  			}
  			else
  			{
  				THROW_EXCEPTION(NoEnoughMemoryException, "Failed in construction of DynamicArray...");
  			}
  		}
  	public:
  		DynamicArray(int length);
  		DynamicArray(const DynamicArray<T>& obj);
  		DynamicArray<T>& operator =(const DynamicArray<T>& obj);
  		int length() const;
  		void resize(int length);
  		~DynamicArray();
  	};
  	
  	template<typename T>
  	DynamicArray<T>::~DynamicArray()		//O(1)
  	{
  		if(this->m_array != nullptr)
  		{
  			delete []this->m_array;
  			this->m_array = nullptr;
  			this->m_length = 0;
  		}
  	}
  
  	template<typename T>
  	void DynamicArray<T>::resize(int length)		//O(n)
  	{
  		update(copy(this->m_array, this->length(), length),length);
  	}
  
  	template<typename T>
  	int DynamicArray<T>::length() const		//O(1)
  	{
  		return this->m_length;
  	}
  
  	template<typename T>
  	DynamicArray<T> &DynamicArray<T>::operator=(const DynamicArray<T>& obj)		//O(n)
  	{
  		if(this != &obj)
  		{
  			update(copy(obj.m_array, obj.length(), obj.length()), obj.length());
  		}
  
  		return *this;
  	}
  
  	template<typename T>
  	DynamicArray<T>::DynamicArray(const DynamicArray<T> &obj)		//O(n)
  	{
  		init(copy(obj.m_array, obj.length(), obj.length()), length());
  	}
  
  	template<typename T>
  	DynamicArray<T>::DynamicArray(int length)		//O(1)
  	{
  		init(new T[length], length);
  	}
  }
  
  
  #endif //DTLIB_DYNAMICARRAY_H
  
  ```



## 第二十一课：线性表的链式存储结构

- 顺序存储结构线性表的最大问题是：

  - 插入和删除需要大量的元素移动。

- 链式存储结构的定义

  - 为了表示每个数据元素与其直接后继元素之间的逻辑关系
  - 数据除了存储本身的信息意外，还需要存储其直接后继的信息
  - 在链表中相邻，但是并不在物理内存中相连

- 链式存储逻辑结构

  - 基于链式存储结构的线性表中，每个节点都包含数据域和指针域
  - 数据域：存储数据元素本身
  - 指针域：存储相邻节点地址

- 专业术语的统一

  - 顺序表（基于顺序存储结构的线性表）
  - 链表（基于链式存储结构的线性表）
    - 单链表：每个节点之包含直接后继的地址信息，最后一个节点的后继节点为`nullptr`
    - 循环链表：单链表中的最后一个节点的直接后继为第一个节点
    - 双向链表：单链表中的节点包含直接前驱和后继两个节点的地址

- 链表中的基本概念

  - 头节点
    - 链表中的辅助节点，包含指向第一个元素的指针
  - 数据节点
    - 链表中代表数据元素的节点，表现形式为（数据元素，后继/前驱地址）
  - 尾节点
    - 链表中的最后一个节点，包含的地址信息为空（但链表，双向链表）

- 单链表中节点的定义

- 在C++中，struct 类型和 class 类型完全一致，区别为默认情况下成员为public权限

  ```cpp
  template <typename T>
  struct Node : public Object
  {
      T value;
      Node* next;
  };
  ```

- 单链表中的内部结构

- 头节点在但链表中的意义是：

  - 辅助元素的定位
  - 方便插入和删除操作
  - 头节点并不存储实际的数据元素

- 在目标位置处插入数据元素

  - 从头节点开始，通过current指针定位到目标位置

  - 从堆空间中申请新的Node节点

  - 执行操作

  - ```cpp
    node->value = e;
    node->next = current->next;
    current->next = node;
    ```

- 在目标位置处删除数据元素

  - 葱头节点开始，通过current指针定位到目标位置

  - 使用toDel指针指向需要删除的节点

  - 执行操作

  - ```cpp
    toDel = current->next;
    current->next = toDel->next;
    delete toDel;
    ```

- 小结

  - 链表中的数据元素在物理内存中无相邻关系
  - 链表中的节点都包含在数据域和指针域
  - 头节点用于辅助数据元素的定位，方便插入和删除操作
  - 插入和删除操作需要保证链表的完整性



## 第二十二课：单链表的具体实现

- 课程目标：

  - 完成链式存储结构线性表的实现
  - Object <– List <– LinkList

- LinkList设计要点

  - 类模板，通过头节点访问后继节点
  - 定义内部节点类型Node，用于描述数据域和指针域
  - 实现线性表的关键操作（增，删，查等）

-  LinkList的声明：

- ```cpp
  template<typename T>
  class LinkList: public List<T>
  {
  protected:
      //类内定义另外一个类
      struct Node: public Object
      {
          //数据域
          T value;
          //指针域
          Node* next;
      }
      //头节点
      Node m_header;
      int m_length;
  public:
      LinkList();
      //......
  };
  ```

- 编程实验一：LinkList类的实现

- 注意在get中遍历节点时获取了成员的地址，这会造成编译器的报错，解决方法使用`mutable`关键字

- 注意重载代码简略写法，直接调用已经实现的版本`insert()`以及`get()`重载中有所体现。

- ```cpp
  /**
    ******************************************************************************
    * @file           : LinkList.h
    * @author         : herryao
    * @brief          : None
    * @email          : stevenyao@g.skku.edu
    * @date           : 4/16/24
    ******************************************************************************
    */
  
  #ifndef DTLIB_LINKLIST_H
  #define DTLIB_LINKLIST_H
  #include "List.h"
  
  
  namespace DTLib
  {
      template <typename T>
      class LinkList: public List<T>
      {
      protected:
         struct Node: public Object
         {
            T value;
            Node* next;
         };
         //为了防止出现在const函数中出现类型转换的问题
         mutable Node  m_header;
         int m_length;
  
      public:
         LinkList()
         {
            this->m_length = 0;
            this->m_header.next = nullptr;
         }
  
         bool insert(const T& e)
         {
            return insert(this->m_length, e);
         }
  
         bool insert(int i, const T& e)
         {
            bool ret = ((i>=0)&&(i<=this->m_length));
  
            if(ret)
            {
               Node* node = new Node;
               if(node != nullptr)
               {
                  Node* current = &this->m_header;
                  for(int p=0; p<i; ++p)
                  {
                     current = current->next;
                  }
                  node->next = current->next;
                  node->value = e;
                  current->next = node;
  
                  this->m_length++;
               }
               else
               {
                  THROW_EXCEPTION(NoEnoughMemoryException,"Failed in insert LinkList...");
               }
            }
            return ret;
         }
         bool remove(int i)
         {
            int ret = ((i>=0)&&(i<this->m_length));
            ret = ret && (this->m_length > 0);
            if(ret)
            {
               Node* current = &this->m_header;
               for(int p=0; p<i; ++p)
               {
                  current = current->next;
               }
               auto toDel = current->next;
               current->next = toDel->next;
               this->m_length--;
               delete toDel;
            }
            return ret;
         }
         bool set(int i, const T& e)
         {
            int ret = ((i>=0)&&(i<this->m_length));
            if(ret)
            {
               Node* current = &this->m_header;
               for(int p=0; p<i; ++p)
               {
                  current = current->next;
               }
  
               current->next->value = e;
            }
            return ret;
         }
  
         T get(int i) const
         {
            T ret;
            if(get(i, ret))
            {
               return ret;
            }
            else
            {
               THROW_EXCEPTION(IndexOutOfBoundsException, "Invalid parameter used here ......");
            }
         }
         bool get(int i, T& e) const
         {
            int ret = ((i>=0)&&(i<this->m_length));
            ret = ret && (this->m_length > 0);
            if(ret)
            {
               //如果在一个const函数中获取一个成员的地址
               //如果获取地址就存在篡改常量的可能
               //被认为有可能会修改成员变量的值
               //解决方法，将相关的成员声明为mutable
               //此时编译器就会允许在一个const的函数中获取一个成员变量的地址了
               //maybe the const pointer can be changed in a const function
               //也可以使用常量的强制转换
  //           Node* current = const_cast<Node*>(&this->m_header);
               Node* current = &this->m_header;
               for(int p=0; p<i; ++p)
               {
                  current = current->next;
               }
  
               e = current->next->value;
            }
            return ret;
         }
  
         int length() const
         {
            return this->m_length;
         }
  
         void clear()
         {
  
            while(this->m_header.next != nullptr)
            {
               auto toDel = this->m_header.next;
               this->m_header.next = toDel->next;
               delete toDel;
            }
            this->m_length = 0;
         }
  
         //destructor
         ~LinkList()
         {
            clear();
         }
  
      };
  }
  #endif //DTLIB_LINKLIST_H
  ```

- 测试用代码：

- ```cpp
  #include <iostream>
  
  #include "SmartPointer.h"
  #include "Exception.h"
  #include "Object.h"
  #include "List.h"
  #include "SeqList.h"
  #include "StaticList.h"
  #include "DynamicList.h"
  #include "StaticArray.h"
  #include "DynamicArray.h"
  #include "LinkList.h"
  
  
  using namespace DTLib;
  
  void test_4_link_list();
  
  int main()
  {
  //    test_4_sp();
  //    test_4_exception();
  //    test_4_obj();
  //    test_4_single_tree();
  //	test_4_list_00();
  //	test_4_SeqList_00();
  //	test_4_StaticList_00();
  //	test_4_DynamicList_00();
  //	test_4_cp_List();
  //	test_4_insert_back();
  //	test_4_static_array();
  //	test_4_dynamic_array();
  	test_4_link_list();
  
  	return 0;
  }
  
  void test_4_link_list()
  {
  	LinkList<int> list;
  	for(int i=0; i<5; ++i)
  	{
  		list.insert(0, i);
  //		list.insert(i);
  		list.set(0, i*i);
  	}
  
  	for(int i=0; i<list.length(); ++i)
  	{
  //		int v=0;
  //		list.get(i,v);
  //		std::cout << v << std::endl;
  		std::cout << list.get(i) << std::endl;
  	}
  	list.remove(2);
  	for(int i=0; i<list.length(); ++i)
  	{
  		std::cout << list.get(i) << std::endl;
  	}
  	list.clear();
  	for(int i=0; i<list.length(); ++i)
  	{
  		std::cout << list.get(i) << std::endl;
  	}
  }
  
  ```

- 问题：

  - 头节点是否存在隐患？
  - 实现代码是否需要优化？

- ==头节点隐患==

- ```cpp
  template <typename T>
  class LinkedList: public List<T>
  {
  protected:
      struct Node: public Object
  	{
  		T value;
      	Node* next;
  	};
  	Node m_header;
      //......
  };
  
  class Test
  {
  public:
      Test()
      {
          //constructor
          throw 0;
      }
  };
  
  LinkList<Test> list;	//出现异常无法处理
  ```

- 出现问题的原因是在LinkList中有一个成员变量`Node`

- 在构造`LinkList`对象时`Node`的构造函数调用，这会构造其内部元素`T value`进而调用了`class Test`的构造函数，抛出了异常，尽管并没有显示地创建T类型的对象。

- 其实这是使用用户犯下的错误，但是为了避免这一问题，可以使用匿名结构体的方式来解决。

- ```cpp
  mutable Node m_header;
  mutable struct{
      char reserved[sizeof(T)];
      Node* next; 
  } m_header;
  ```

- 报错：下面定义无法实现，因为m_header是`DTLib::LinkList<int>::<unnamed struct>*`类型，需要使用`reinterpret_cast<Node*>`进行强制类型转换。

- ```
  //Node* current =&this->m_header;
  Node* current = reinterpret_cast<Node*>(&this->m_header);
  ```

- 在`get()`， `set()`， `insert()`， `remove()`中军存在大量重复的用于寻址的代码

- ```cpp
  Node* current = &this->m_header;
  for(int p=0; p<i; p++)
  {
      current = current->next;
  }
  ```

- 将其封装成一个保护成员函数以简化接口中的重复代码

- 此外在`get() const`函数中调用一个非const函数`position()`是不允许的，因此此函数也需要声明成一个const类型的函数。

- ```cpp
  Node* position(int i) const
  {
  	Node* current = reinterpret_cast<Node*>(&this->m_header);
  	for(int p=0; p<i; p++)
  	{
  		current = current->next;
  	}
  	return current;
  }
  ```

- 修改之后经过测试代码发现可以正常运行。直到真正创建Test类对象

- ```cpp
  void test_4_link_list_2()
  {
      class Test
      {
      public:
         Test()
         {
            //constructor
            throw 0;
         }
      };
      LinkList<Test> list;
      Test t;
      list.insert(t);
      std::cout << "D.T.Lib" << std::endl;
  
  }
  ```

- 在修改之后的代码继续运行之前的测试用例，发现出现段错误

- ```
  /home/herryao/cs/DT/DTLib/DTLIb/cmake-build-debug/DTLIb
  16
  
  Process finished with exit code 139 (interrupted by signal 11:SIGSEGV)
  ```

- 因为我们为了在避免在实例化数据结构直接调用T的构造函数。但是我们使用了匿名结构体，他并不是继承自Object类的，这会造成内存布局错误，因此导致了上述问题。所以在匿名结构体的声明必须继承自Object以达到，完全一致的内存布局

- 最终修改后的代码如下所示，通过了所有的测试代码

- ```cpp
  /**
    ******************************************************************************
    * @file           : LinkList.h
    * @author         : herryao
    * @brief          : None
    * @email          : stevenyao@g.skku.edu
    * @date           : 4/16/24
    ******************************************************************************
    */
  
  #ifndef DTLIB_LINKLIST_H
  #define DTLIB_LINKLIST_H
  #include "List.h"
  
  
  namespace DTLib
  {
  	template <typename T>
  	class LinkList: public List<T>
  	{
  	protected:
  		struct Node: public Object
  		{
  			T value;
  			Node* next;
  		};
  		//为了防止出现在const函数中出现类型转换的问题
  //		mutable Node  m_header;
  		//不再显示调用构造函数，而是采用匿名结构体构造和原来
  		//Node类型对象相同的内存分布，但并不会调用T的构造函数
  		//而是预留空间
  		mutable struct: public Object{
  			char reserved[sizeof(T)];
  			Node* next;
  		} m_header;
  		int m_length;
  
  		Node* position(int i) const
  		{
  //			Node* current =&this->m_header;
  			Node* current = reinterpret_cast<Node*>(&this->m_header);
  			for(int p=0; p<i; p++)
  			{
  				current = current->next;
  			}
  			return current;
  		}
  
  	public:
  
  		LinkList()
  		{
  			this->m_length = 0;
  			this->m_header.next = nullptr;
  		}
  
  		bool insert(const T& e)
  		{
  			return insert(this->m_length, e);
  		}
  
  		bool insert(int i, const T& e)
  		{
  			bool ret = ((i>=0)&&(i<=this->m_length));
  
  			if(ret)
  			{
  				Node* node = new Node;
  				if(node != nullptr)
  				{
  					Node* current = position(i);
  					node->next = current->next;
  					node->value = e;
  					current->next = node;
  
  					this->m_length++;
  				}
  				else
  				{
  					THROW_EXCEPTION(NoEnoughMemoryException,"Failed in insert LinkList...");
  				}
  			}
  			return ret;
  		}
  		bool remove(int i)
  		{
  			int ret = ((i>=0)&&(i<this->m_length));
  			ret = ret && (this->m_length > 0);
  			if(ret)
  			{
  				Node* current = position(i);
  				auto toDel = current->next;
  				current->next = toDel->next;
  				this->m_length--;
  				delete toDel;
  			}
  			return ret;
  		}
  		bool set(int i, const T& e)
  		{
  			int ret = ((i>=0)&&(i<this->m_length));
  			if(ret)
  			{
  				position(i)->next->value = e;
  			}
  			return ret;
  		}
  
  		T get(int i) const
  		{
  			T ret;
  			if(get(i, ret))
  			{
  				return ret;
  			}
  			else
  			{
  				THROW_EXCEPTION(IndexOutOfBoundsException, "Invalid parameter used here ......");
  			}
  		}
  		bool get(int i, T& e) const
  		{
  			int ret = ((i>=0)&&(i<this->m_length));
  			ret = ret && (this->m_length > 0);
  			if(ret)
  			{
  				//如果在一个const函数中获取一个成员的地址
  				//如果获取地址就存在篡改常量的可能
  				//被认为有可能会修改成员变量的值
  				//解决方法，将相关的成员声明为mutable
  				//此时编译器就会允许在一个const的函数中获取一个成员变量的地址了
  				//maybe the const pointer can be changed in a const function
  				//也可以使用常量的强制转换
  //				Node* current = const_cast<Node*>(&this->m_header);
  //				Node* current = position(i);
  //				e = current->next->value;
  
  				e = position(i)->next->value;
  			}
  			return ret;
  		}
  
  		int length() const
  		{
  			return this->m_length;
  		}
  
  		void clear()
  		{
  
  			while(this->m_header.next != nullptr)
  			{
  				auto toDel = this->m_header.next;
  				this->m_header.next = toDel->next;
  				delete toDel;
  			}
  			this->m_length = 0;
  		}
  
  		//destructor
  		~LinkList()
  		{
  			clear();
  		}
  
  	};
  }
  #endif //DTLIB_LINKLIST_H
  
  ```

- 小结
  - 通过类模板实现链表，包含头节点成员和长度成员
  - 定义节点类型，并通过对中的节点对象构成链式存储
  - 为了避免构造产生异常的隐患，头节点类型成员在类内声明为了匿名结构体类型
    - 相同的需要使用mutable关键字来在const函数中获取其地址
    - 必须有相同的继承关系来保证绝对的内存一致布局，否则会造成段错误
    - 使用了`reinterpret_cast`进行了强制类型转换
  - 代码优化是变成完成后必不可少的环节，将封装好的代码一般给予较低权限，使得暴露给用户的借口尽可能简洁
  - 在进行代码优化后必须全部重新测试

## 第二十三课：顺序表和单链表的对比分析

