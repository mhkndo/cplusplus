/*
You are given N counters, initially set to 0, and you have two possible operations on them:

increase(X) − counter X is increased by 1,
max counter − all counters are set to the maximum value of any counter.
A non-empty array A of M integers is given. This array represents consecutive operations:

if A[K] = X, such that 1 ≤ X ≤ N, then operation K is increase(X),
if A[K] = N + 1 then operation K is max counter.
For example, given integer N = 5 and array A such that:

    A[0] = 3
    A[1] = 4
    A[2] = 4
    A[3] = 6
    A[4] = 1
    A[5] = 4
    A[6] = 4
the values of the counters after each consecutive operation will be:

    (0, 0, 1, 0, 0)
    (0, 0, 1, 1, 0)
    (0, 0, 1, 2, 0)
    (2, 2, 2, 2, 2)
    (3, 2, 2, 2, 2)
    (3, 2, 2, 3, 2)
    (3, 2, 2, 4, 2)
The goal is to calculate the value of every counter after all operations.

Write a function:

vector<int> solution(int N, vector<int> &A);

that, given an integer N and a non-empty array A consisting of M integers, returns a sequence of integers representing the values of the counters.

Result array should be returned as a vector of integers.

For example, given:

    A[0] = 3
    A[1] = 4
    A[2] = 4
    A[3] = 6
    A[4] = 1
    A[5] = 4
    A[6] = 4
the function should return [3, 2, 2, 4, 2], as explained above.

Write an efficient algorithm for the following assumptions:

N and M are integers within the range [1..100,000];
each element of array A is an integer within the range [1..N + 1].

*/




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void increase(vector<int> &A, int X){
    A.at(X) += 1;
}

void maxCounter(vector<int> &A, int maxValue){
    for(int i=0; i < A.size(); i++){
        if(A.at(i) != maxValue){
            A.at(i) = maxValue;
        }
    }
}



vector<int> solution(int N, vector<int> &A){

    vector<int> counter(N,0);
    int maxValue = 0;

    for(int i=0; i<A.size(); i++){
        //cout<<"i="<<i<<" - element= "<<A.at(i)<<endl;
        if(A.at(i) >=1 && A.at(i) <= N){
            increase(counter,A.at(i) - 1);
            maxValue = (maxValue > counter.at((A.at(i) - 1))) ? maxValue : counter.at(A.at(i) - 1);
        }
        else if(A.at(i) == N+1){
            maxCounter(counter,maxValue);
        }
        else{
            cout<<"Array has an element either smaller than 1 or bigger than N+1. So exit!"<<endl;
            exit(0);
        }
        /*
        cout<<"counter: ";
        for(vector<int>::iterator it = counter.begin(); it != counter.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        */
    }

    return counter;

}

int main(int argc, char const *argv[]) {

    vector<int> V;

    V.push_back(3);
    V.push_back(4);
    V.push_back(4);
    V.push_back(6);
    V.push_back(1);
    V.push_back(4);
    V.push_back(4);

    int N = 5;

    vector<int> ans = solution(5,V);
/*
    for(vector<int>::iterator it = ans.begin(); it != ans.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
*/


    std::cout << "hello babe!" << '\n';
    return 0;
}
