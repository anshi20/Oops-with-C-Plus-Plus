//Task 4 : reaction of compiler while using methods for mixed values!

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

using namespace std;
using namespace First;
using namespace Second;
int main()
{
  cout<<add(1,2.5F)<<" ";  
  
  cout<<add(1.2F,5); 
  return 0;
}
