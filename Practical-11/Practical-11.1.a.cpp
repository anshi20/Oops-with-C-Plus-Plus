// Call Parent class method in child class function without creating an object of parent class. 

#include<iostream>
using namespace std;
class A{
    public:
       void displayA()
       {
        cout << "This is Parent Class Method " << endl;
       }
};
class B: public A{
    public:
       void displayB()
       {
          cout << "Calling Parent class method in child class function" << endl;
          displayA();
       }  
};
int main()
{
    B obj;  //Simple Oops concept
    obj.displayB();     //Simple Oops concept
    return 0;
}
