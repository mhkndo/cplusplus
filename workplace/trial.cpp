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
