#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

void foo(int value)
{
    static std::mutex mutex;
    std::lock_guard<std::mutex> lock(mutex);

    cout << "Hello World="<< value << endl;
}

int main()
{
    std::thread t(foo,1);
    std::thread t2(foo,2);
    std::thread t3(foo,3);
    std::thread t4(foo,4);
    t.join();
    t2.join();
    t3.join();
    t4.join();
    return 0;
}
