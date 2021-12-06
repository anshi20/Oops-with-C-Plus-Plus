// When B publicly inherits A.

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
class B: public A{
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
    obj.x = 30;  //Inheritance
    //obj.y = 40;  //error  because z is private member. 
    //obj.z = 50; //error   because z is private member. 
    obj.display();     //Simple Oops concept
    return 0;
}
