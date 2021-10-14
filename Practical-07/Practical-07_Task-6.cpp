/*

    Task 6: Print the following pattern : 
             
            if n = 4        * * * *
                            * * *
                            * * 
                            * 
*/

#include<iostream>
using namespace std;
int main()
{
   int i,j,n;
   char arr[n][n];
   cout<<"Enter the value of n : ";
   cin>>n;
   for(j=n-1;j>=0;j--)   
   {
     for(i=0;i<=j;i++)
      {
           cout<<"* ";
      }
     cout<<"\n";
   }
  
   return 0;
}
