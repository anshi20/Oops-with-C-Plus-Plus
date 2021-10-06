//Task 2 : Checl whether entered string is a palindrome or not

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
  string a;
  int n=5;
  cout<<"Enter a string : ";
  getline(cin,a);
  cout<<"\n";
  int i,j,flag=0;
  for(i=0;i<n/2;i++)
  {
    if(a[i]!=a[n-1-i])
     {
        cout<<"The entered string is not a Palindrome!";
        exit(0);
     }
  }
  cout<<"The entered string is Palindrome!";
  return 0;
}

