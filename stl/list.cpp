#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {

    list<int> dummy;

    dummy.push_back(1);
    dummy.push_back(2);
    dummy.push_back(3);

    list<int>::iterator it = dummy.begin();
    it++;
    //it = dummy.erase(it);
    cout<<"element: "<<*it<<endl;

    for(list<int>::iterator it = dummy.begin(); it!=dummy.end();it++){

        if(*it == 2){
            it = dummy.erase(it);
        }
    }

    for(list<int>::iterator it = dummy.begin(); it!=dummy.end();it++){
        cout<<*it<<endl;
    }

    std::cout << "hello babe!" << '\n';
    return 0;
}
