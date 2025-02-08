#include<iostream>
using namespace std;
struct person
{
	string firstName;
	string lastName;
	int age;
	string contactNumber;	
}p1;
int main()
{
cout<<"enter 1st name:";
cin>>p1.firstName;
cout<<"enter last name:";
cin>>p1.lastName;
cout<<"enter aGE:";
cin>>p1.age;
cout<<"enter contact numkber:";
cin>>p1.contactNumber;
return 0;
}

