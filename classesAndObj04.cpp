

#include<iostream>

using namespace std;


// blueprint
class Human{

public:
    string name;

    void introduce(){
        cout << "Hi" << name << endl;
    }
};


int main(){



    // one type , anil gets stored at stack not heap
    Human anil;

    // Next way using new keyword , obj will allocated in heap mem and it will dynamic and also it will return address means we will need a 
    // a pointer to store it. if u want to create object dynamically you have to use new keyword

    Human *bunty = new Human();

    // accessing the values use dot op
    anil.name = " anil ";
    anil.introduce();

    // so we will arrow to access the member var and member funtions 

    bunty->name = " bunty ";
    bunty->introduce();

    return 0;
}