#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
    bool error1 = true;
    bool error2 = false;

    if(error1){
        throw bad_alloc();
    }
    if(error2){
        throw exception();
    }
}


int main(int argc, char const *argv[]) {

    try{
        goesWrong();
    }
    catch(bad_alloc &e){
        std::cout << "bad_alloc:" <<e.what()<< '\n';
    }
    catch(exception &e){
        std::cout << "exception: " <<e.what()<< '\n';
    }


    std::cout << "hello there" << '\n';
    return 0;
}
