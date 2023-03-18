

#include<iostream>


using namespace std;

class Human{

public:
    string name;

    void introduce();
};

// We Can Define A Method outside the class defination By Using Scope Resolution

void Human :: introduce(){

    cout << Human ::name << endl;
}


int main(){
    
    
    Human anil;

    anil.name = "anil";
    anil.introduce();
    return 0;
}

// Continue // Let Explore Scope resolution in classes and objects