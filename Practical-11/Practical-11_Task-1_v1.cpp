#include<iostream>
using namespace std;
class A{
    public:
       int x;
       int y;
};
class B: public A{
    public:
       void display(){
           x=10;      // Inheritance
           y=20;      //Inheritance
           cout<<"x : "<<x<<endl;
           cout<<"y : "<<y;
       }  
};
int main()
{
    B obj;  //Simple Oops concept
    obj.display();     //Simple Oops concept
    return 0;
}
