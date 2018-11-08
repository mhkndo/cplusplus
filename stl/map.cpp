#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[]) {

    map<string,int> dummy;

    dummy["a"] = 1;
    dummy["el"] = 2;
    dummy["hey"] = 3;

    pair<string,int> dum("key",5);
    dummy.insert(dum);

    dummy.insert(make_pair("mey",8));

    for(map<string,int>::iterator it = dummy.begin(); it!=dummy.end();it++){
        cout<<it->first<<": "<<it->second<<endl;
    }


    std::cout << "hello babe!" << '\n';
    return 0;
}
