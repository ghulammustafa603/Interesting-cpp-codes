#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"Enter the guess number from.(1 to 100) \n";
cin>>a;
cout<<"You have five attempts:\n";
for(b=1; b<=5 && c!=a; b++){
    cout <<"Enter your guess number.\n";
    cin>>c;
    if(c<a){
   cout<<"Your guessed number is smaller than actual.";
    } 
    if(c>a) {
    cout<<"Your guessed number is greater than actual.";
    } 
    }
    if(c==a){
    cout<<"Congrats! You guessed it.";
    }
    else if(c!=a){
    cout<<"Sorry! you guessed wrong values in all five attempts. the correct value is "<<a<<endl;
    }
    
    
    return 0;
}