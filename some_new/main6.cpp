#include <iostream>
#include <utility>

using namespace std;
void reference(int& v)
{
    cout << "左值引用" << endl;
}

void reference(int&& v)
{
    cout << "右值引用" << endl;
}

template <typename T>
void pass(T&& v)
{
    cout << "普通传参:";
    reference(v); //始终调用reference(int&)

    cout << "move传参:";
    reference(std::move(v));

    cout << "forward传参:";
    reference(std::forward<T>(v));
}

int main()
{
    //无论传递参数为左值还是右值，普通传参都会将参数作为左值进行转发，
    //所有move总会接受到一个左值，从而转发调用了&&输出右值引用；
    //只有std::forward没有造成多余copy，同时完美转发了函数的实参
    //std::forware<T>(v) = static_cast<T&&>(v)
    cout << "传递右值:" << endl;
    pass(1);

    cout << "传递左值:" << endl;
    int v=1;
    pass(v);

    return 0;
}
