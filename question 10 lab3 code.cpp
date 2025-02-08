#include <iostream>
 #include<string>
 using namespace std; 
int main () 
{ string name; 
int ID; 
int units;
int total_amount;
 cout<<"Write your name:\n";
 getline(cin,name); 
cout<<"Write your ID number:\n";
cin>>ID;
cout<<"Write number of units:\n";
cin>>units;


if(units>=1&&units<=199)
{
total_amount=units*5;
cout<<"Your total amount is:"<<total_amount<<endl;}
else if(units>=200&&units<=399)
{total_amount=units*10;
cout<<"Your total amount is:"<<total_amount<<endl;}
else if(units>=400&&units<=599)
{total_amount=units*15;
cout<<"Your total amount is:"<<total_amount<<endl;}
else if(units>=600)
{total_amount=units*20;
cout<<"Your total amount is:"<<total_amount<<endl;}
else if(units<0)
{cout<<"Invalid input!";}
 return 0 ; } 