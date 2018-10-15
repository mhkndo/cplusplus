#include <iostream>
#include <fstream>

using namespace std;

struct Person{
    char name[50];
    int age;
    double height;
};

#if 1
int main(int argc, char const *argv[]) {

    Person someone = {"hakan",28,180.0};

    string FileName = "test.bin";

    ////write to bin//
    ofstream outFile;
    outFile.open(FileName,ios::binary);

    if(outFile.is_open()){

        outFile.write(reinterpret_cast<char *>(&someone),sizeof(Person));
        outFile.close();
    }
    else{
        std::cout << "Cannot open file:" <<FileName<< '\n';
    }

    Person someoneElse = {};

    ifstream inFile;
    inFile.open(FileName,ios::binary);

    if(inFile.is_open()){

        inFile.read(reinterpret_cast<char *>(&someoneElse),sizeof(Person));
        inFile.close();
    }
    else{
        std::cout << "Cannot open file:" <<FileName<< '\n';
    }

    std::cout << someoneElse.name <<','<<someoneElse.age<<","<<someoneElse.height << '\n';



    std::cout << "hello babe" << '\n';
    return 0;
}
#endif
