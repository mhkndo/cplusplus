#include <iostream>
#include <vector>

using namespace std;


int main(int argc, char const *argv[]) {

    int divs = 1;
    cout<<"reorder in every: ";
    cin >> divs;

    cout<<"Now enter array (enter a character other than number to finish then press enter):  "<<endl;

    int input;
    vector<int> store;
    while(cin >> input){
        store.push_back(input);
    }

/*
    for(vector<int>::iterator it = store.begin(); it != store.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
*/
    int size = store.size();

    //cout<<"size = "<<size<<endl;

    if(divs > size){
        cout<<"cannot do it. division sizes you enter are bigger than array size"<<endl;
        return 0;
    }

    vector<int> reverseList;

    for(int i=0; i<size ; ){
        vector<int> temp;

        for(int j=divs-1; j>=0; j--){
            //cout<<"i= "<<i<<" - j= "<<j<<endl;
            if((j+i) < size)
                temp.push_back(store.at(j+i));
        }

        reverseList.insert(reverseList.end(),temp.begin(),temp.end());
        i += divs;

    }

    cout<<endl;

    for(vector<int>::iterator it = reverseList.begin(); it != reverseList.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;



    std::cout << "hello babe!" << '\n';
    return 0;
}
