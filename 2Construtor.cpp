#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class pappu

{
public:
     int x,y;


     // Constructor

     pappu(){
        cout<<"We are inside constructor Yeppi"<<endl;
        cout<<"Enter the value of x"<<endl;
        cin>>x;
        cout<<"Enter the value of y"<<endl;
        cin>>y;

     }

    // Member function to display values

    // This is fucking Modern C++
     
     void display(){  
        cout<<"the value of x is : "<<x<<endl;
        cout<<"the value of y is : "<<y<<endl;

     }


};

int main(){
    pappu obj;

    obj.display();

    return 0;

};
