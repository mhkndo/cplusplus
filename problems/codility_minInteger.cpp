/*
This is a demo task.

Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].

*/



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> &A){

    int minPosInteger = 1;

    sort(A.begin(),A.end());

    for(int i=1; i<1000000 ; i++){
        if(!binary_search(A.begin(), A.end(),i)){
            minPosInteger = i;
            break;
        }
    }

    return minPosInteger;
}

int main(int argc, char const *argv[]) {

    int array[] = {-3,-2,-1,0,1,2,3,4,5,6};
    vector<int> V(array,array+10);

    int ans = solution(V);

    cout<<"ans= "<<ans<<endl;

    std::cout << "hello babe!" << '\n';
    return 0;
}
