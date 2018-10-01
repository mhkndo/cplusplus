#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {

    //ofstream outFile;
    fstream outFile;

    string outFileName = "text.txt";
    outFile.open(outFileName.c_str(),ios::out);

    if(outFile.is_open()){
        outFile << "Hello there"<<endl;
        outFile << 123 <<endl;
        outFile.close();
    }
    else{
        std::cout << "Could not create file:" <<outFileName<< '\n';
    }




    std::cout << "hello there" << '\n';
    return 0;
}
