#include <iostream>
#include <string>
using namespace std ;
string value(int x)
{
	if (x%2==0)
	{
		return "Even";
	}
	else 
	{
		return "Odd";
	}
}
int main ()
{
int x(7);
cout<<"The value is "<<value(x)<<endl;
   system ("PAUSE") ;
   return 0 ;
}


