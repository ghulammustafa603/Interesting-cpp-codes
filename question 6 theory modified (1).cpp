#include<iostream>
using namespace std;

int main()
{
int x,y,fac(1);
cout<<"Enter a positive integer number for which to show the factorial"<<endl;
cin>>y;
cout<<"Factorial("<<y<<")=";
    for(x=1; x<=y; x++){
    if(x!=1){
    cout<<"*";
    }
    cout<<x;
fac=fac*x;
}
cout<<"="<<fac;

      return 0;
}