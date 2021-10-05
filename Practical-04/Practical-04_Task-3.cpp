//Task 3 : without sro & using keyword!

#include<iostream>

namespace First{
  int add(int a,int b)
  {
    return a+b;
  }
}

namespace Second{
  float add(float a,float b)
  {
    return a+b;
  }  
}

int main()
{
  cout<<add(1,3);  //1+3=4
  
  cout<<add(1.2F,3.5F); //4.7
  return 0;
}

