/*
     Task 2 : Display the current year, month and day using switch-case. (Using ctime header file)
     
     Current Year : 2021
     Current Month : October
     Current Date : 19-10-2021
   
*/

#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
using namespace std;
int main(){
    int choice;
    time_t curtime=time(0);
    string dt =ctime(&curtime);
    cout << "Current time =" << dt;
    while(1){
    cout<< "1. Current Year\n" << "2.Current Month\n" << "3. Day\n"<<"4. Exit\n"<<"\nEnter Your Choice \n";
    cin>>choice;
    switch(choice){
       case 1: cout<<dt.substr(20,4)<<endl;
               break;
       case 2: cout<<dt.substr(4,3)<<endl;
               break;
       case 3: cout<<dt.substr(0,3)<<endl;
               break;
       case 4: cout<<"Exiting"<<endl;
               exit(0);
       default:cout<<"try again with correct choice\n";
               break;
      }
    }
    return 0;
}
