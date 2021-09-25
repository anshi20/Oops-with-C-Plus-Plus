#include<iostream>
using namespace std;
void prime(int a)
{
   int i,f_count=0,m=a/2;
   for(i=0;i<=m; i++)
   {
     if(a%i==0)
     {
        f_count++;   
        break;
     }
   }
   if(f_count==1)
       cout<<a<<" is a prime number!!";
   else
       cout<<a<<" is not a prime number!!";
}
int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   prime(n);
   return 0;
}

