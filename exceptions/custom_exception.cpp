#include <iostream>
#include <exception>

class MyException: public std::exception {
public:
    virtual const char* what() const throw(){
        return "something bad happened!";
    }
};

class Test{
public:
    void goesWrong() /*throw()*/{
        throw MyException();
    }
};



int main(int argc, char const *argv[]) {

    Test test;
    try{
        test.goesWrong();
    }
    catch(MyException &e){
        std::cout << e.what() << '\n';
    }


    std::cout << "hello there" << '\n';
    return 0;
}
