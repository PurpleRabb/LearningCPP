#include <iostream>
#include <string>
#include <regex>

using namespace std;
int main()
{
    string fnames[] = {"foo.txt", "bar.txt", "test", "a0.txt", "AAA.txt"};
    std::regex txt_regex("[a-z]+\\.txt");
    for(const auto &fname: fnames)
        cout << fname << ": " << std::regex_match(fname, txt_regex) << endl;

    cout << "------------------------------------" << endl;
    std::regex base_regex("([a-z]+)\\.txt");
    std::smatch base_match;
    for(const auto &fname: fnames)
    {
        if(std::regex_match(fname,base_match,base_regex))
        {
            string base = base_match[1].str();
            cout << "sub-match[0]: " << base_match[0].str() << endl;
            cout << fname << " sub-match[1]: " << base << endl;
        }
    }
}
