#include <iostream>
using namespace std;

int main ()
{
int a,b,c;
cout<<"Enter first number:\n";
cin>>a;
cout<<"Enter second number:\n";
cin>>b;
cout<<"Enter third number:\n";
cin>>c;
if(a>b && a>c)
cout<<"First number is greatest:";
else if(b>a && b>c)
cout<<"Second  number is greatest:";
 else if(c>a && c>b)
 cout<<"Third number is greatest:";
 system("pause");
 return 0 ;

}



