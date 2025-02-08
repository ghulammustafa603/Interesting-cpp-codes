#include<iostream>
using namespace std;
int factorial(int n)
{
	int fac(1);
	for(int i=1; i<=n; i++)
	{
		if(n>1)
		{
			fac=fac*i;
		}
	}

  cout<<fac;
return fac;
}
int main()
{
	int a;
	cout<<"Enter any positive number for finding factorial:";
	cin>>a;
    factorial(a);
return 0;
}

