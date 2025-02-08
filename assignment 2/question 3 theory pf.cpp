#include<iostream>
using namespace std;
int Addition(int,int);
int Subtraction(int,int);
int Multiplication(int,int);
float Division(float,int);
int main()
{
    char x;
    do{
	cout<<"Welcome to calculator program"<<endl;
	int num1,num2,opt;
	
	cout<<"Enter first number:"<<endl;
	cin>>num1;
	cout<<"Enter second number:"<<endl;
	cin>>num2;
	cout<<"Select following operation by entering their number:"<<endl;
	cout<<"1.\tAddition"<<endl;
	cout<<"2.\tSubraction"<<endl;
	cout<<"3.\tMultipilication"<<endl;
	cout<<"4.\tDivision"<<endl;
	cin>>opt;
	if(opt==1)
	{
		cout<<"The addition of two number is:"<<Addition(num1,num2)<<endl;

			}
	if(opt==2)
	{
		cout<<"The Subtraction of two number is:"<<	Subtraction(num1,num2)<<endl;
	
	}
	if(opt==3)
	{
		cout<<"The 	Multiplication of two number is:"<<	Multiplication(num1,num2)<<endl;
	
	}
	if(opt==4)
	{
		cout<<"The division of two number is:"<<Division(num1,num2)<<endl;
		
	}
	
	cout<<"Do you want to continue(Y/N):";
	cin>>x;
    }
	while(x=='Y'||x=='y');

return 0;
}
int Addition(int a,int b)
{
	return a+b;
}
int Subtraction (int a,int b)
{
	return a-b;
}

int Multiplication(int a,int b)
{
	return a*b;
}
float Division(float a,int b)
{
	return a/b;
}

question 4
#include<iostream>
using namespace std;
void swap(int& a, int& b, int& c)
{
     a=10;
     b=4;
     c=2;
    cout<<"Before swaping values are: "<<a<<" "<<b<<" "<<c<<endl;
    int temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
    cout<<"After swaping values are: "<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
  swap(num1,num2,num3);
return 0;
}
