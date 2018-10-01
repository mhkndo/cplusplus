#include <iostream>

using namespace std;

void mightGoWrong(/* arguments */) {
    /* code */
    bool error  = false;
    bool error2 = true;

    if (error) {
        throw "something went wrong!";
    }
    if(error2){
        throw string("something else went wrong");
    }
}

int main()
{
    try{
        mightGoWrong();
    }
    catch(int e){
        std::cout << "Error Code: " <<e<< '\n';
    }
    catch(char const *e){
        std::cout << "Error Message: " <<e<< '\n';
    }
    catch(string e){
        std::cout << "string error message: " <<e<< '\n';
    }

    std::cout<<"still running"<<endl;
}
