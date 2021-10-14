/*

    Task 8: Print the following pattern : 
             
            if n = 4       * * * *
                           * * *
                           * * 
                           *
*/

#include<iostream>
using namespace std;
int main()
{   
   int i,j,n;
   cout<<"Enter the value of n :";
   cin >> n;
   for(i=0;i<n;i++)
   { 
     for(j=0;j<n;j++)
      {
          int sum = i + j;
          if(sum<=n-1)
             cout<<"*";
          else
             cout<<" ";
      }cout<<"\n";
   }
   return 0;  
}
