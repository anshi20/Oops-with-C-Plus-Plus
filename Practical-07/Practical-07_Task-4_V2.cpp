#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int i,j,n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nOutput : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { 
            cout<<arr[i][n-1]/3<<" ";
        }
        cout<<"\n";
    }
}
