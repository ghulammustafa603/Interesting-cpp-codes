#include<iostream>

using namespace std;

int main()
{
    double a,b;
    char operation;
    
    cout << "Enter first number:\n";
    cin>>a;
 cout << "Enter second number:\n";  
cin>>b;
cout<<"enter operator"<<endl;
cin>>operation;
if(operation=='+')
cout<<"operation was + and result is "<<a+b<<endl;

if(operation=='-')
cout<<"operation was - and result is "<<a-b<<endl;
if(operation=='*')
cout<<"operation was * and result is "<<a*b<<endl;
if(operation=='/')
cout<<"operation was / and result is "<<a/b<<endl;

    return 0;
}