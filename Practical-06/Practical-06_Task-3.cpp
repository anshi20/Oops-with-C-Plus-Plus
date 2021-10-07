#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
  string str1;
  int j,i,n;
  cout<<"Enter your string : ";
  getline(cin,str1);
  cout<<"\n";
  n=str1.length();
  cout<<"The reverse of string entered is : \t";
  for(i=n-1;i>=0;i--)
  {
    cout<<str1[i];
  }
    
  cout<<"\t";
  
  return 0;
}
