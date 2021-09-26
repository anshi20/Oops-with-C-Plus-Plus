#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   int i=2;  //Every number is divisible by 1!
   while(i<=n-1)
   {
      if(n%i==0){
           cout<<"\nThe number "<<n<<" is not prime";
           break;
      }
    i=i+1;
   }
   if(i==n)
       cout<<"\nThe number "<<n<<" is prime number!";
   return 0;
}

