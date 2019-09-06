#include <memory>
#include <iostream>

//std::shared_ptr是一种智能指针，能记录多少个shared_ptr共同指向一个对象
//从而消除显示的调用delete，但是需要使用new来调用

class TestPointer {
    public:
        TestPointer()
        {
            std::cout << "TestPointer" << std::endl;
        }

        ~TestPointer()
        {
            std::cout << "~TestPointer" << std::endl;
        }

};
void foo(std::shared_ptr<int> i)
{
    (*i)++;
}

class A;
class B;
//shared_ptr不能解决相互引用的问题
class A
{
    public:
        std::shared_ptr<B> pointer;
        ~A()
        {
            std::cout << "~A" << std::endl;
        }
};

class B
{
    public:
        //std::shared_ptr<A> pointer;
        std::weak_ptr<A> pointer;
        ~B()
        {
            std::cout << "~B" << std::endl;
        }
};

int main()
{
    auto pointer = std::make_shared<TestPointer>();
    //foo(pointer);
    //std::cout << *pointer << std::endl;

    auto pointer2 = pointer; //引用计数+1
    auto pointer3 = pointer; //引用计数+1

    std::cout << "pointer.use_count() = " << pointer.use_count() << std::endl;
    std::cout << "pointer2.use_count() = " << pointer2.use_count() << std::endl;
    std::cout << "pointer3.use_count() = " << pointer3.use_count() << std::endl;

    std::unique_ptr<int> pointerInt = std::make_unique<int>(10); //c++14
    //std::unique_ptr<int> pointerInt2 = pointerInt; //非法，不能引用独占指，但是可以std::move


    //shared_ptr不能解决相互引用的问题:
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->pointer = b; //析构函数不再调用
    b->pointer = a; //西沟函数不再调用

    //解决上述问题的方法就是使用弱引用指针
    return 0;
}
