#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

int main ()
{
sring id,name,email,dep,pnum;
	cout<<"Enter a student record:\n";
	cout<<"Enter ID:";
	cin>>id;
	cout<<"Enter name:";
	getline(cin,name);
	cout<<"Enter email address:";
	getline(cin,email);
	cout<<"Enter department";
	cin>>dep;
	cout<<"Enter phone number:";
	cin>>pnum;
	cout<<"Do you want to enter new record (Y/N)?";
	ofstream myfile.open("student.text");
	myfile<<id<<name<<email<<dep;
	myfile.close();

	ifstream myread("student.text");
	while (getline(myread,mytxt))
	{
	cout<<myfile<<"\n";
  }
  myread.close();
  system ("pause") ;
  return 0 ;
  }

