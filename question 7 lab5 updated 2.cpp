#include<iostream>
using namespace std;

int main()
{
int x,y,next_term;
x=0;
y=1;

cout <<x<<", "<<y<<", ";
for(next_term=1; next_term<=22; next_term++){

next_term=x+y;
x=y;
y=next_term;
cout <<next_term<<", ";
} 
return 0;
}