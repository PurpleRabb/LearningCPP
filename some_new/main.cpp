#include <iostream>
#include <initializer_list>

/*
 * decltype指定尾返回类型,C++14中可以省略
 * */
template<typename T, typename U>
auto add(T x, U y) -> decltype(x+y)
{
    return x+y;
}

class Magic 
{
    public:
        Magic(std::initializer_list<int> list)
        {
            for(auto &i : list)
            {
                std::cout << i << std::endl;
            }
        }
};

int main()
{
    char *p = nullptr; //C++11 引入新的关键字表示空指针

    int array[] = {1,2,3,4,5};
    for(auto &i : array) //区间迭代，并引入auto关键字做类型推导
    {
        std::cout << i << std::endl;
    }

    std::cout << "=======================" << std::endl;
    auto x=1;
    auto y=2;
    decltype(x+y) z=x+y;//auto只能对修饰变量，引入decltype对表达式类型进行推导
    std::cout << z << std::endl;
    std::cout << "=======================" << std::endl;

    Magic magic = {5,4,3,2,1}; //用初始化列表初始化,与数组等初始化统一
    return 0;
}
