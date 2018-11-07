#include <iostream>
#include <vector>

using namespace std;

class Dog{
private:
    int id;
    string name;
public:
    Dog(): id(0), name(""){

    }
    Dog(int id, string name): id(id), name(name){

    }

    void print(){
        cout<<"id: "<<id<<" - name: "<<name<<endl;
    }

    const Dog& operator=(const Dog &other){

        cout<<"assignment running"<<endl;
        id = other.id;
        name = other.name;
        return *this;
    }

    Dog(const Dog &other){
        cout<<"constructer running"<<endl;
        *this = other;
    }

    int getID(){
        return this->id;
    }

    string getName(){
        return this->name;
    }

    friend ostream &operator<<(ostream &out, const Dog &other){
        out << other.id <<" : "<< other.name;
        return out;
    }


};


int main(int argc, char const *argv[]) {

    Dog dog1(5,"a1");
    dog1.print();

    Dog dog2, dog3;

    dog2 = dog3 = dog1;
    dog2.print();
    dog3.print();

    cout<<endl;
    Dog dog4 = dog1;
    dog4.print();

    cout<< dog1 << dog2<<endl;

    std::cout << "hello babe!" << '\n';
    return 0;
}
