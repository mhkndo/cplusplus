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
        name = other.name;
        age = other.age;
    }
    Person(string name, int age) : name(name), age(age){

    }
    void print() const{
        cout<<name<<": "<<age<<flush;
    }

    bool operator<(const Person &other) const{
        if(name==other.name){
            return age < other.age;
        }
        else{
            return name <other.name;
        }
    }

};


int main(int argc, char const *argv[]) {

    map<Person,int> dummy;

    dummy[Person("aa",5)] = 0;
    dummy[Person("bb",6)] = 1;
    dummy[Person("cc",7)] = 2;

    dummy.insert(make_pair(Person("dd",8),3));
    dummy.insert(make_pair(Person("dd",9),4));
    dummy[Person("dd",8)] = 5;

    for(map<Person,int>::iterator it = dummy.begin(); it!=dummy.end();it++){
        it->first.print();
        cout<<" value= "<<it->second<<endl;
    }

    std::cout << "hello babe!" << '\n';
    return 0;
}
