#include <iostream>
#include <vector>

std::vector<std::vector<int>> wow; //support >>

//变参模板支持,sizeof...(T)判断参数个数
template <typename... Elements>
class tuple {
};

template <typename... ARGS>
void fun(ARGS... args);

template <typename... Types1, template<typename...> class T,
         typename... Types2, template<typename...> class V>
void bar(const T<Types1...>&, const V<Types2...>&)
{
    std::cout << sizeof...(Types1) << std::endl;
    std::cout << sizeof...(Types2) << std::endl;
}

//委托构造函数
class Base{
    public:
        int value1;
        int value2;
        Base() {
            value1 = 1;
        }
        Base(int value):Base() {
            value2 = 2;
        }
        virtual void func() {}
        virtual void fib() final {} //禁止被重载
};

class Fib final { //禁止被继承
};

enum class new_enum : unsigned int { //强类型枚举
    value1,
    value2,
    value3 = 100,
    value4 = 100
};

template <typename T>
std::ostream& operator<< (typename std::enable_if<std::is_enum<T>::value,std::ostream>::type &stream,const T& e)
{
    return stream << static_cast<typename std::underlying_type<T>::type>(e);
}

//继承构造
class SubClass : public Base {
    public:
        using Base::Base; //继承构造
        virtual void func() override {}; //显示虚函数继承
        //virtual void funb() override; //父类没有此函数，报错
};

class Magic {
    public:
        Magic() = default; // 显示声明使用编译器生成的构造函数
        Magic& operator=(const Magic&) = delete; //显示禁止编译器生成构造
};

int main()
{
    tuple<int ,double> a;
    tuple<char,float,long> b;
    bar(a,b);

    Base c(2);
    std::cout << c.value1 << std::endl;
    std::cout << c.value2 << std::endl;

    SubClass s(10);
    std::cout << s.value1 << std::endl;
    std::cout << s.value2 << std::endl;

    std::cout << new_enum::value3 << std::endl;
    return 0;
}
