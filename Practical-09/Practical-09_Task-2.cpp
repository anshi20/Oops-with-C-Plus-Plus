#include<iostream>
using namespace std;
class area{
     public : 
       float a;
       float b;
       area(float x, float y)
       {
        a = x;
        b = y;
       }
       area(float x)
       {
        a = x;
        b = x;
       }
       void printArea()
       {
        cout << "Area is :" << a * b ;
       }
};
int main()
{
    area rectangle(10, 20);
    area sqaure(10);
    rectangle.printArea();
    sqaure.printArea();
    return 0;
}
