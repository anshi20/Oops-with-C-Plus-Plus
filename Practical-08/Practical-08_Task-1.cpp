//Task 1 : Making resultant matrix by reversing (without restoration)
/*
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
  for(i=n-1;i>=0;i--) 
  {
    for(j=n-1;j>=0;j--)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  
  return 0;
}

