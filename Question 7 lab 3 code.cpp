#include<iostream>
using namespace std;

int main()
{
int x,y;
cout <<"Enter first number:\n";
cin>>x;
cout <<"Enter second number:\n";
cin>>y;
if(x>y)
 cout <<"First number is greater than second:\n";
 else if(y>x)
 cout <<"Second number is greater than first:\n";
 else if(x==y)
 cout <<" Both numbers are equal:\n";
        
    return 0;
}