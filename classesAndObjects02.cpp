 
 #include<iostream>

using namespace std;


// class + classname
class HumanBeing{

    // it an Access specifier which  means it can be accessible outside the class
    public:
    // MEMBER FUCNTION
    void display(){
        cout << "Hello , I am a human being ";
    }

};

int main(){

    // classname  + objectname
    // object is a run time variable of a class
    HumanBeing anil;

    // accessing the member function
    anil.display();

    return 0;
}