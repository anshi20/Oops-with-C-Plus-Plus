/*
     Task 3 : Makig resultant matrix by subtracting each element by 
     10 (only printing without restoration)
      1  2  3          9  8  7
      4  5  6     =>   6  5  4
      7  8  9          3  2  1
*/ 

#include<iostream>
using namespace std;
int main()
{
  int arr[3][3],j,n,i;
  cout<<"Enter the value of n : ";
  cin>>n;
  cout<<"Enter 2D Matrix"<<"\n";
  for(i=0;i<n;i++) 
  {
    for(j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  cout<<"\nResultant matrix : \n";
  for(i=0;i<n;i++) 
  {
    for(j=0;j<n;j++)
    {
      cout<<10-arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  
  return 0;
}
