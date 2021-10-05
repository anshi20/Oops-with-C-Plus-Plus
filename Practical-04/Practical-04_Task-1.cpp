//Task-1 : Access the methods using scope resolution operator.

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
  std::cout<<First::add(1,3)<<" ";  //1+3=4
  
  std::cout<<Second::add(1.2F,3.5F); //4.7
  return 0;
}
