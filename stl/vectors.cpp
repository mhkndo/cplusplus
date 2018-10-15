#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[]) {


    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    for(vector<string>::iterator it=strings.begin(); it != strings.end(); it++){
        std::cout << *it << '\n';
    }

    int array[3] = {0,1,2};

    int *p = array;

    std::cout << *p+2 << '\n';

    std::cout << "hello babe" << '\n';
    return 0;
}
