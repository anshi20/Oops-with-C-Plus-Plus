/*
       
	               1   2   3                 1   1   1
	               4   5   6      =>         2   2   2
	               7   8   9                 3   3   3      
*/

#include<iostream>
using namespace std;
int main()
{
	int N;
  cout<<"Enter the value of N : ";
  cin>>N;
	int arr[N][N];
	for(int i = 0 ; i < N ; i++)
  {
		for(int j = 0 ; j < N ; j++)
       {
         cin >> arr[i][j];
       }
	}
  for(int i = 0 ; i <= N ; i++)
  {
		for(int j = 0 ; j <= N ; j++)
       {
          arr[i][j] = ((j*10+i)%10)+1;
       }
	}
  cout << "\nResultant array : " << endl;
	for(int i = 0 ; i < N ; i++)
  {
		for(int j = 0 ; j < N ; j++)
      {
      cout << arr[i][j] << " ";
      }
      cout << "\n";
	}
  return 0;
}
