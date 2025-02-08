#include<iostream>
using namespace std;

int main()
{
   int a,b,c; 
    cout<<"Enter range upto which you want to find table:";
    cin>>a;
    for(b=1; b<=a; b++){
    cout<<"Table of "<<b<<endl;
    for(c=1; c<=10; c++){
    
    cout<<c<<" × "<<b<<" = "<<c*b<<endl;
    }
    cout<<endl;   }
    return 0;
}