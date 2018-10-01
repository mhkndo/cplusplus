#include <iostream>

class CanGoWrong{
public:
    CanGoWrong(){
        char *pMemory = new char[9999999999999];
        delete [] pMemory;
    }
};


int main(int argc, char const *argv[]) {
    try{
        CanGoWrong wrong;
    }
    catch(std::bad_alloc &e){
        std::cout <<"exception: "<< e.what() << '\n';
    }



    std::cout << "hello world" << '\n';
    return 0;
}
