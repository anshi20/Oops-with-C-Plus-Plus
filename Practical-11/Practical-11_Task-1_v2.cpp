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
           x=10;      // This will be qverwritten. 
           y=20;      // This will be overwritten.
           cout<<"x : "<<x<<endl;
           cout<<"y : "<<y;
       }  
};
int main()
{
    B obj;  //Simple Oops concept
    obj.x = 30;  //Inheritance
    obj.y = 40;  //Inheritance
    obj.display();     //Simple Oops concept
    return 0;
}
