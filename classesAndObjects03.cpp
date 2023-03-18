

#include<iostream>
#include<string>

using namespace std;

class HumanBeing{

        // access specifier + member variable
        public:
            string name;

        // member function
        void introduce(){

            cout << "Hi i am " << name <<endl;
        }

};

int main(){
        // Object_one
        HumanBeing anil;

        // assign the var name to jatin

        anil.name = "anil";
        anil.introduce();

        // Object_two
        HumanBeing krishna;

        krishna.name = "krishna";
        krishna.introduce();
        return 0;
}