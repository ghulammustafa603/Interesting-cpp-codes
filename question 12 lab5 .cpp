#include<iostream>
using namespace std;

int main()
{
   int a,b,c;
cout<<"Enter any number for guessing:";
cin>>c;
for(b=1;a!=c; b++){
cout<<"Guess the number and Enter your guess:";
cin>>a;
if(a<c){
cout<<"The guessed number is smaller than actual number:\n";
}   
else if(a>c){
cout<<"The guessed number is greater than actual number:\n";
 }

else if(a==c){
cout<<"Congrats! You guessed it\n";
}
}
return 0;
}