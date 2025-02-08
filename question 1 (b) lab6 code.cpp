#include <iostream>
using namespace std;

int main ()
{
	int c;
for(int a=1; a<=5; a++)
{
	for (int b=1; b<=5; b++)
	{		
		c=a*b;
		cout<<c;
	if (c<10){
	cout<<"  ";
	}
	else{
		cout<<" ";
	}
	}
	cout<<endl;
}

   system ("pause") ;
   return 0 ;
}


