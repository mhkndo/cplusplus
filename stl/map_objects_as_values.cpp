#include <iostream>
#include <map>

using namespace std;

class Person{
private:
    string name;
    int age;
public:

    Person() : name(""), age(0){

    }
    Person(const Person &other){
        cout<<"copy constructor called."<<endl;
        name = other.name;
        age = other.age;
    }
    Person(string name, int age) : name(name), age(age){

    }
    void print(){
        cout<<name<<": "<<age<<endl;
    }
};


int main(int argc, char const *argv[]) {

    map<int,Person> dummy;

    dummy[0] = Person("aa",5);
    dummy[1] = Person("bb",6);
    dummy[2] = Person("cc",7);

    dummy.insert(make_pair(3,Person("dd",8)));

    for(map<int,Person>::iterator it = dummy.begin(); it!=dummy.end();it++){
        it->second.print();
    }

    std::cout << "hello babe!" << '\n';
    return 0;
}
