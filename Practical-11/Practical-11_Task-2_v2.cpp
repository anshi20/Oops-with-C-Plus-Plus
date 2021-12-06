// When B protectedly inherits A.

#include<iostream>
using namespace std;
class A{
    public:
       int x;
    protected:
       int y;
    private:
       int z;
};
class B: protected A{
    public:
       void display(){
           x=10;      
           y=20;     
           //z=30;  // error! because z is private member. 
           cout<<"x : "<<x<<endl;
           cout<<"y : "<<y<<endl;
           //cout<<"z : "<<z<<endl;    // error! because z is private member. 
       }  
};

int main()
{
    B obj;  //Simple Oops concept
    //obj.x = 30;  //error  because x is inaccessible within this context.
    //obj.y = 40;  //error  because y protected within this context. 
    //obj.z = 50; //error  because z is private within this context. 
    obj.display();     // Simple Oops concept
    return 0;
}
