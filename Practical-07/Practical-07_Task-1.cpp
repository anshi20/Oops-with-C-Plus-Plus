/*
     Task 1 : Display the current year, month and day using switch-case. (Manual method)
     
     Current Year : 2021
     Current Month : October
     Current Date : 13-10-2021
   
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   int choice;
   cout<<"1. Current Year \t\t2.Current Month \t\t3. Current Date \t\t4.Exit\n";
   
   while(1)
  {
   cout<<"Enter your choice : ";
   cin>>choice;
   switch(choice)
   {
      
      case 1: cout<<"\n"<<"Current Year : 2021\n";
              break;
      case 2: cout<<"\n"<<"Current Month : October\n";
              break;      
      case 3: cout<<"\n"<<"Current Date : 13-10-2021\n";
              break;
      case 4: exit(0);
              break;
      default:cout<<"Choice Invalid !\n";
   }
  } 
  return 0;
}
