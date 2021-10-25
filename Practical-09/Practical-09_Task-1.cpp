#include<iostream>
using namespace std;
class Abc
{
    public:
       int a;
       int b;
       Abc(int x, int y)
    {
        a=x;
        b=y;
    }
};

int main()
{
    Abc obj(10,20);
    cout << obj.a<<"\t"<<obj.b<<endl;
}
