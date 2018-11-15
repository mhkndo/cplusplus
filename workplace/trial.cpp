#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(vector<int> &A, int first, int second){
    int temp = A.at(first);
    A.at(first) = A.at(second);
    A.at(second) = temp;



    cout<<"swap: "<<A.at(first)<<" "<<A.at(second)<<" : ";
    for(auto it=A.begin(); it!=A.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int partition(vector<int> &A, int low, int high){

    int pivot = A.at(high);

    int i = low -1;


    for(int j=low; j<=high-1; j++){
        cout<<"partition: "<<A.at(j)<<" : "<<pivot<<endl;
        if(A.at(j) <= pivot){
            cout<<"entered if statement"<<endl;
            i++;
            swap(A,i,j);
        }
    }

    swap(A,i+1,high);

    return i+1;
}

void quickSort(vector<int> &A, int low, int high){

    if(low < high){
        int pi = partition(A,low,high);

        cout<<"quickSort: low= "<<low<<" pi= "<<pi<<" high= "<<high<<endl;
        quickSort(A,low,pi-1);
        quickSort(A,pi+1,high);

    }
}


int main(int argc, char const *argv[]) {

    //int array[] = {90,20,80,70,60,40,30,10,50};
    //vector<int> V(array,array + sizeof(array) / sizeof(int));

    int input;
    vector<int> V;
    while(cin >> input){
        V.push_back(input);
    }

    quickSort(V,0,(V.size()-1));

    cout<<"Final Form: ";
    for(auto it=V.begin(); it!=V.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    std::cout << "hello babe!" << '\n';
    return 0;
}
