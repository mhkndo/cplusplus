#include <iostream>
#include <fstream>

using namespace std;

#if 1
int main(int argc, char const *argv[]) {

    string inFileName = "text.txt";
    ifstream inFile;
    inFile.open(inFileName);

    if(inFile.is_open()){

        string line;
        while(!inFile.eof()){
            getline(inFile, line);
            std::cout << "line: " <<line<< '\n';
        }

        inFile.close();
    }
    else{
        std::cout << "Cannot open file:" <<inFileName<< '\n';
    }


    std::cout << "hello babe" << '\n';
    return 0;
}
#endif
