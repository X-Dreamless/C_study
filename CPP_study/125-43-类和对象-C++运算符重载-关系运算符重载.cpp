
/*
	第1阶段C++ 匠心之作 从0到1入门

	第2阶段实战-通讯录管理

	第3阶段-C++核心编程

		1 内存分区模型

		2 引用

		3 函数提高

		4 类和对象

			4.1 封装

			4.2 对象的初始化和清理

			4.3 C++对象模型和this指针

			4.4 友元

			4.5 运算符重载

				4.5.1 加号运算符重载

				4.5.2 左移运算符重载

				4.5.3 递增运算符重载

				4.5.4 赋值运算符重载

				4.5.5 关系运算符重载

					作用：重载关系运算符，可以让两个自定义类型对象进行对比操作


                    来自弹幕：这边说一个很重要的点 就是运算符左边的对象可以调用运算符函数 必须在左边不能在右

                    运算符函数 https://blog.csdn.net/weixin_52995261/article/details/123191170

                        在C++中会把运算符当做函数处理，一个表达式，其实是调用了很多的运算符函数完成计算的，
                        这种特性对于内建类型是没有用的，但是对于自建类型的数据，是可以进行个性化设计，
                        可以大大提高代码的可读性、易用性，

                        运算符函数的格式：[#是运算符 O是类对象]

                        单目运算符： #O 或者 O# 就会被编译器翻译成

                        成员函数：
                            [] O::operator#(void)
                            {
                            }

                        返回值是不确定的，唯一的参数就是调用者

                        全局函数：
                            [] operator#(O& o)
                            {
                                // 全局运算符函数不属于任何类，因此需要把调用者作为参数传递
                            }

                        注意：运算符成员函数、全局函数，只能实现一个，不能同时实现，会有歧义


                        双目运算符: a # b
                        注意：一定是运算符左边的对象发起的函数调用

                        成员函数：
                            [] A::operator#(B& b)
                            {
                            }

                        全局函数：
                            [] operator#(A& a,B& b)
                            {
                            }


*/

#include <iostream>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    };

    bool operator==(Person& p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator!=(Person& p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    string m_Name;
    int m_Age;
};

void test01()
{
    //int a = 0;
    //int b = 0;

    Person a("孙悟空", 18);
    Person b("孙悟空", 18);

    if (a == b)
    {
        cout << "a和b相等" << endl;
    }
    else
    {
        cout << "a和b不相等" << endl;
    }

    if (a != b)
    {
        cout << "a和b不相等" << endl;
    }
    else
    {
        cout << "a和b相等" << endl;
    }
}


int main()
{
    test01();

    return 0;
}










/*
    运算符函数 https://blog.csdn.net/weixin_52995261/article/details/123191170

        在C++中会把运算符当做函数处理，一个表达式，其实是调用了很多的运算符函数完成计算的，
        这种特性对于内建类型是没有用的，但是对于自建类型的数据，是可以进行个性化设计，
        可以大大提高代码的可读性、易用性，例如：string类
            string str1,str2;
            str1 += str2; strcat()
            str1 == str2; strcmp()

        运算符函数的格式：[#是运算符 O是类对象]

        单目运算符： #O 或者 O# 就会被编译器翻译成

            成员函数：
                [] O::operator#(void)
                {
                }

            返回值是不确定的，唯一的参数就是调用者

            全局函数：
                [] operator#(O& o)
                {
                    // 全局运算符函数不属于任何类，因此需要把调用者作为参数传递
                }

        注意：运算符成员函数、全局函数，只能实现一个，不能同时实现，会有歧义

        双目运算符: a # b

            注意：一定是运算符左边的对象发起的函数调用

            成员函数：
                [] A::operator#(B& b)
                {
                }

            全局函数：
                [] operator#(A& a,B& b)
                {
                }


        思考：如何实现一个坐标类
            (1,1) + (1,2) = (2,3)
            Point p1(1,1),p2(1,2);
            p1 + p2


        二、运算类的双目运算符 [T是类名 ]

            成员函数： a + b
                const T operator+(const T& b)const
                {
                    return T(x+b.x);
                }

            全局函数： a + b
                const T operator+(const T& a,const T& b)
                {
                    return T(a.x+b.x);
                }

            友元：
                在实现类的全局运算符函数时，可能会使用类内的私有成员，此时会没有访问权限，
                如果把私有成员改为public或者实现get函数都会打破类的封装性、以及麻烦，
                最好的方法就是给这个全局运算符函数独家授权，这种授权行为我们称为设置为友元函数，
                方法是：在类中对全局运算符函数进行声明，并且在声明前面加上friend关键字即可。


        三、输入输出运算符

            在C++中 << >> 运算符不光是左移、右移，同时它们还是cout、cin的输出、输入运算符

            输出运算符：cout << 10 << endl;
                Test a;
                cout << a << endl;

                由于 << 运算符的调用者是cout，所以我们是无法在cout中实现 <<运算符的成员函数，因此只能实现 << 运算符的全局函数

                ostream& operator<<(ostream& os,const Test& t)
                {
                    return os << t.x;
                }

            输入运算符：cin >> num
                Test a,b;
                cin >> a >> b;

                istream& operator>>(istream& is,Test& t)
                {
                    return is >> t.x;
                }

            注意：
                1、由于输入、输出运算符是可以连续调用的，因此返回值应该还是cin或者cout，所以返回ostream\istream的引用
                2、由于输入、输出运算符的调用者是左边的cin、cout，我们无法在它们的类内ostream、istream内添加运算符函数，因此只能实现成全局的运算符函数
                3、如果自己实现的输入、输出运算符函数中，使用了自己类的私有成员，就需要在类内声明为友元函数


        四、运算类的单目运算符 【T是类名】

            单目运算符：++/-- ! ~ - sizeof * &

            成员函数： - ! ~
                const T operator-(void)const
                {
                    return T(-x,-y);
                }

            注意：运算对象可以带有常属性，因此需要是常函数，而且在运算过程中不会修改自身的值，而是产生一个临时的计算结果，并且是右值，所以返回值也需要加const

            全局函数：
                const T operator-(const T& a)const
                {
                    return T(-a.x,-a.y);
                }


        五、自变运算符函数

            前自变运算符：++i/--i

                成员函数：
                    const T& operator++(void)// 不能是常函数
                    {
                        x++,y++;
                        return *this; //一定要返回引用，因为前自变会改变操作数本身
                    }

                全局函数：

                    const T& operator++(T& a)// 不能是常函数
                    {
                        a.x++,a.y++;
                        return a; //一定要返回引用，因为前自变会改变操作数本身
                    }

            后自变运算符：i++/i--

                哑元：在参数列表中增加一个不会使用到的哑元类型，目的是区分是前自变还是后自变 [哑元的唯一用处]

                成员函数：
                    const T operator++(int)
                    {
                        return T(x++,y++); // 返回的是临时对象，不能返回它的引用
                    }

                全局函数：
                    const T operator++(T& t,int)
                    {
                        return T(t.x++,t.y++); // 返回的是临时对象，不能返回它的引用
                    }


        六、特殊的运算符函数

            * & -> . () []

            1、下标运算符 []

                当想让一个类对象当做数组使用时，可以重载下标运算符，可以让类对象像数组一样使用，例如 vector

            2、函数运算符 ()

                重载此运算符可以让一个类对象当做函数使用

                注意：[] () 不能实现为全局运算符函数，只能实现成员函数

            3、解引用 * 和访问成员运算符 ->

                重载这两个运算符可以让一个类对象像指针一样使用，智能指针就是通过重载此运算符来实现的

            4、new/delete可以实现重载

                为什么要重载new/delete运算符？

                    a、可以在运算符重载函数中记录每次分配、释放内存的地址和次数，可以检查出是否出现内存泄漏、以及哪里出现
                    b、对于字节较小、且频繁分配、释放的对象，可以在运算符重载函数中给它多分配一些内存减少出现内存碎片的可能

                成员函数、全局格式一样：

                    void* operator new(size_t size) // size是要申请的字节数，编译器会自动计算并传递过来
                    {
                        void* ptr = malloc(size);
                        cout << ptr << endl; // 程序员自己设计的内容
                        return ptr;
                    }

                    void operator delete(void* ptr) // ptr是释放内存的首地址
                    {
                        cout << ptr << endl; // 程序员自己设计
                        free(ptr);
                    }

                注意：如果只是针对某个类重载它的new\delete，那么只需要实现成员函数即可，如果想所有的类型都重载new\delete，则实现全局函数


        七、重载运算符的限制

            1、有些运算符不能重载

                :: 域限定符
                . 直接访问成员的运算符
                ? : 三目运算符
                sizeof 计算字节大小运算符
                typeid 获取类型信息的运算符

            2、只能重载成全局函数的运算符

                << 输出运算符
                >> 输入运算符

            3、只能重载成成员函数的运算符

                [] 下标运算符
                () 函数运算符
                = 赋值运算符 因为类内一定有一个
                -> 间接访问成员的运算符

            4、运算符重载可以自定义运算的过程，但是无法改变运算符的优先级

            5、运算符的操作数不能改变

            6、不能发明新的运算符


        建议：
            1、重载运算符需要遵循一致性，不要改变运算符的运算规则
            2、不要忘记重载运算符的初衷：为了提高代码的可读性(符合情理)，不要炫技
        ————————————————
        版权声明：本文为CSDN博主「weixin_52995261」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
        原文链接：https://blog.csdn.net/weixin_52995261/article/details/123191170
*/