#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{  string str1;
   string str2;
   int i;
   cout<<"Enter string 1 : ";
   getline(cin,str1);
   cout<<"Enter string 2 : ";
   getline(cin,str2);
   cout<<"\n\n";
   int n1=str1.length();
   int n2=str2.length();
   if(n1!=n2){
     cout<<"Strings are not equal !\n";
     exit(0);
   }
   for(i=0;i<n1;i++){
      if(str1[i]!=str2[i]){
         cout<<"Strings are not equal !\n";
         exit(0);
      }
   }
   cout<<"Strings are equal !\n";
   return 0;
}

