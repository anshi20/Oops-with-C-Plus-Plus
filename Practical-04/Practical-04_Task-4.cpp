#include<iostream>
namespace std1 {
int x=10;
}
namespace std2{
float y =5.3;
}
int main()
{
   std::cout<<"This is Practical 04 - Task 4";
   std::cout<<"x="<<std1::x<<std::endl;
   std::cout<<"y="<<std2::y<<std::endl;
   return 0;
}
