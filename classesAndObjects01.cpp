

#include<iostream>

using namespace std;

// blueprint
class house{

        // members 
        private : 

        // member variables
        int length = 0, breadth = 0;


        public : 
        //member functions
        void setData( int x , int y){

            length = x;
            breadth = y;

        }

        void area(){
            cout << "Area of house is : " << length*breadth;

        }

};

int main(){

// name of class  +name of obj
house gini;

gini.setData(10, 10);

gini.area();
// using length outside the class 


}