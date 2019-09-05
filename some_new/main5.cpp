#include <iostream>
#include <vector>
#include <utility> //std::move

class A {
    public:
        int *pointer;
        A() : pointer(new int(1)) {
            std::cout << "constructor:" << pointer << std::endl;
        }
        A(A& a) : pointer(new int(*a.pointer)) {
            std::cout << "copy:" << pointer << std::endl;
        }

        A(A&& a) : pointer(a.pointer) {
            a.pointer = nullptr; //将亡值设置为null避免被销毁
            std::cout << "move:" << pointer << std::endl;
        }

        ~A() {
            std::cout << "destroy:" << pointer << std::endl;
            delete pointer;
        }
};

A return_rvalue(bool test) {
    A a,b; //调用两次构造函数
    if(test)
        return a;
    else
        return b;
}

int main() {
    A obj = return_rvalue(false); //右值引用,A(A&& a)
    std::cout << "obj:" << std::endl;
    std::cout << obj.pointer << std::endl;
    std::cout << *obj.pointer << std::endl;

    std::string str = "Hello world.";
    std::vector<std::string> v;
    v.push_back(str); //产生拷贝行为

    v.push_back(std::move(str)); //不产生copy，直接搬移
    return 0;
}

