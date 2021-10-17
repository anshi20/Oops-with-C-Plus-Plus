/*

    Task 4: 
              INPUT                 OUTPUT
             
              1 2 3                  1 1 1
              4 5 6                  2 2 2
              7 8 9                  3 3 3
*/

#include<iostream>
using namespace std;
int main()
{
   int i,j,n,arr[3][3];
   cout<<"Enter the value of n : ";
   cin>>n;
   for(i=0;i<n;i++)   
   {
     for(j=0;j<n;j++)
      {
           cin>>arr[i][j];
      }
   }
   for(i=0;i<n;i++)   
   {
     for(j=0;j<n;j++)
      {
           cout<<i+1;
      }
     cout<<"\n";
   }
  
   return 0;
}
