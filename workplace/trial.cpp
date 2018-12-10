#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#if 1
class Person{
private:
    const int age;
    string name;
public:

    Person() : age(0), name(""){}
    /*
    Person(){
        age = 0;
        name ="";
    }
    */

    string getName(){
        return name;
    }

    const int getAge(){
        return age;
    }

    void printAge(int age){
        cout<<age<<endl;
    }

};
#endif

#if 0
class A{
private:
    int age;
public:
    A(int tAge){
        age = tAge;
    }
};

class B{
private:
    A obj_A = A(5);
    int hakan(5);
public:
    B(int temp) {}//: obj_A(temp){}
};
#endif

int main(int argc, char const *argv[]) {

    //B obj(5);
    Person p;

    p.printAge(p.getAge());

    cout<< "hello from mac"<<endl;


    std::cout << "hello babe!" << '\n';
    return 0;
}
