#include <iostream>
#include <array>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <tuple>

using namespace std;

int main()
{
    //new array,在栈上申请空间，区别于堆上的vector
    std::array<int,4> arr = {1,2,3,4};
    std::sort(arr.begin(),arr.end());
    //cout << arr << endl;
    for(auto &a:arr)
    {
        cout << a << endl;
    }

    //unordered_map 与 map
    std::unordered_map<int ,std::string> u = {
        {1,"1"},
        {3,"3"},
        {2,"2"},
    };

    std::map<int ,std::string> v = {
        {1,"1"},
        {3,"3"},
        {2,"2"},
    };

    std::cout << "std::unordered_map" << std::endl;
    for(const auto & n : u )
        std::cout << "Key;[" << n.first << "] Value:" << n.second << "]\n";

    for(const auto & n : v )
        std::cout << "Key;[" << n.first << "] Value:" << n.second << "]\n";

    //tuple元组的支持.get<>依赖编译时的常亮，不能用于运行时,考虑std::variant
    auto student = std::make_tuple(3.8,'A',"ZhangSan");
    cout << std::get<0>(student) << std::get<1>(student) << std::get<2>(student) << endl;
    //拆包
    double gpa;
    char grade;
    std::string name;
    std::tie(gpa,grade,name) = student;
    cout << name << endl;
}
