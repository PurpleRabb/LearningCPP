#include <iostream>
#include <vector>

using namespace std;

std::vector<int> foo() {
    std::vector<int> temp = {1,2,3,4}; //temp为将亡值
    return temp;
}

void reference(std::string& str) {
    std::cout << "left value=" << str << std::endl;
}

void reference(std::string&& str) {
    std::cout << "right value=" << str << std::endl;
}

int main()
{
    std::vector<int> v = foo(); //这里可能产生大量的数据拷贝

    std::string lv1 = "string,"; //左值
    std::string && rv1 = std::move(lv1); //&&表示右值引用，std::move将左值转移为右值
    std::cout << "rv1=" << rv1 << std::endl;

    const std::string& lv2 = lv1 + lv1;
    std::string&& rv2 = lv1+lv2; //rv2虽然引用了一个右值，但是它是一个引用，所以rv2依然是一个左值
    rv2 += "string";
    std::cout << "rv2=" << rv2 << std::endl;

    reference(rv2);
    return 0;
}
