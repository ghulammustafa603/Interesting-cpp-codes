#include <iostream>
using namespace std ;
int compare(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main ()
{
	int a(5),b(9);
cout<<"The greater value is "<<compare(a,b)<<endl;
   system ("PAUSE") ;
   return 0 ;
}


