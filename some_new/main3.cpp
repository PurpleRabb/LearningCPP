#include <iostream>
#include <utility>

//Lambda表达式
//[捕获列表](参数列表) mutable(可选) 异常属性-> 返回类型 {
//  函数体
//}

using namespace std;

void learn_lambda_func_1() {
    //值捕获
    int value_1 = 1;
    auto copy_value_1 = [value_1] {
        return value_1;
    };
    value_1 = 100;
    auto stored_value_1 = copy_value_1();
    cout << "value_1=" << value_1 << endl;
    cout << "stored_value_1=" << stored_value_1 << endl;
}

void learn_lambda_func_2() {
    //引用捕获
    int value_2 = 1;
    auto copy_value_2 = [&value_2] {
        return value_2;
    };
    value_2 = 100;

    auto stored_value_2 = copy_value_2();
    cout << "value_2=" << value_2 << endl;
    cout << "stored_value_2=" << stored_value_2 << endl;
}

//隐式捕获
//  []空捕获列表
//  [name1,name2,...]捕获一系列变量
//  [&]引用捕获,让编译器自行推导捕获列表
//  [=]值捕获

void learn_lambda_func_3() {
    //表达式捕获(c++14)
    /*auto important = std::make_unique<int>(1);
    auto add = [v1=1,v2=std::move(important)](int x,int y) -> int {
        return x+y+v1+(*v2);
    };
    cout << "add(3,4)=" << add(3,4) << endl;*/
}

void learn_lambda_func_4() {
    //泛型Lambda
    auto generic = [](auto x,auto y) {
        return x+y;
    };
    cout << "generic(1,2)=" << generic(1,2) << endl;
    cout << "generic(1.1,2.2)=" << generic(1.1,2.2) << endl;
}

int main()
{
    learn_lambda_func_1();
    learn_lambda_func_2();
    learn_lambda_func_3();
    learn_lambda_func_4();
    return 0;
}
