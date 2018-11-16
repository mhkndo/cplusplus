#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int X, vector<int> &A){

    vector<int> check(X,1);
    int result = -1;
    int sum = 0;
    vector<int>::iterator it;

    for(it=check.begin(); it!=check.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(int i=0; i<A.size(); i++){
        cout<<"i= "<<i<<" A= "<<A.at(i)<<endl;
        check.at(A.at(i)-1) = 0;
        //cout<<"count= "<<count(check.begin(),check.end(),0);
        for(int j=0; j<check.size(); j++){
            sum += check.at(j);
        }
        if(sum == 0){
            result = i;
            cout<<"result= "<<result<<endl;
            break;
        }
        else{
            sum = 0;
            result = -1;
        }
        /*
        if(!count(check.begin(),check.end(),0)){
            result = i;
            cout<<"result= "<<result<<endl;
            break;
        }
        */
        cout<<endl;
        for(it=check.begin(); it!=check.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(it=check.begin(); it!=check.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    /*
    if(count(check.begin(),check.end(),0)){
        result = -1;
    }
    */
    return result;
}


int main(int argc, char const *argv[]) {

    int array[] = {2,2,2,2,2,2}; //{1,3,1,4,2,3,5,4}; //
    vector<int> V(array,array + sizeof(array) / sizeof(int));

    int result = solution(5, V);

    cout<<"result= "<<result<<endl;





    std::cout << "hello babe!" << '\n';
    return 0;
}
