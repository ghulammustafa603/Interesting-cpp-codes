#include <iostream>
using namespace std ;

int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
double dev(int a,int b)
{
	return a/double(b);
}
int rem(int a,int b)
{
	return a%b;
}
int main ()
{
	int x(12),y(5); 
cout<<"Substraction = "<<sub(x,y)<<endl;
cout<<"Multiplication = "<<mul(x,y)<<endl;
   cout<<"Division = "<<dev(x,y)<<endl;
   cout<<"Reminder = "<<rem(x,y)<<endl;
   return 0 ;
}


