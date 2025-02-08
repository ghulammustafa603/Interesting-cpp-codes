#include<iostream>
using namespace std;

int main(){
double x,y;
char operation;
cout<<"Enter first number:\n";
cin>>x;
cout<<"Enter second number:\n";
cin>>y;
cout<<"Enter the operator:\n";
cin>>operation;
switch(operation){
	case '+':
	cout<<"The addition of two number is "<<x+y<<endl;
	break;
		case '-':
	cout<<"The substraction  of two number is "<<x-y<<endl;
	break;
		case '*':
	cout<<"The multipication of two number is "<<x*y<<endl;
	break;
		case '/':
	cout<<"The division of two number is "<<x/y<<endl;
	break;
	default :
		cout<<"Entered operator is invalid!";
	
}
return 0;
}


