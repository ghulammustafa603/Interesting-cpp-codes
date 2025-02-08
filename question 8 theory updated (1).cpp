#include<iostream>
using namespace std;

int main()
{
int num1(0),num2(1),next_term;
cout<<num1<<", "<<num2;
for(int i=1; i<=18; i++){
    
       
next_term=num1+num2;
num1=num2;
num2=next_term;
cout<<", "<<next_term;
}
return 0;
}