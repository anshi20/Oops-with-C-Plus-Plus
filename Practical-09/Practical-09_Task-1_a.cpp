#include<iostream>
#include<stdlib.h>
using namespace std;
class Student {
   private:
	char name[30];
	char phone_no[13];
        char address[30];
   public:
   	void read()
   	{
   	  cout<<"\nName : ";
	  gets(name);
	  cout<<"Phone No. : ";
	  gets(phone_no);
	  cout<<"Address : ";
	  gets(address);
	}
	void display()
        {
          cout<<"\nName : "<<name;
	  cout<<"\nPhone No. : "<<phone_no;
	  cout<<"\nAddress : "<<address;
       }
};
int main()
{   Student s1, s2;
    s1.read();
    s2.read();
    s1.display();
    cout<<endl;
    s2.display();
    return 0;
}
