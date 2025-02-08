#include<iostream>
using namespace std;

int main()
{
   int a(0),x(0),y(0),b;
 
for ( b=1; b>0; b++)
 {
   
cout<<"1. Books (per item price = 500)\n"
<<"2. T-Shirt (per item price = 700)\n"
<<"3. Shoes (per pair price = 1000)\n"
<<"0. Exit the program\n";
cout << "Enter any number to select any product to buy or 0 to exit: ";
cin>>b;
if(b==1){
cout<<"You have selected books. "<<"Enter quantity: ";
cin>>a;
}
else if(b==2){
cout<<"You have selected T-shirt. "<<"Enter quantity: ";
cin>>x;
}
else if(b==3){
cout<<"You have selected shoes. "<<"Enter quantity: ";
cin>>y;
}
else if(b==0){
cout<<"Exit the program.\n ";
b=-1;
}
} 
cout<<"*****Receipt*****"<<endl;
cout<<"You have bought "<<a<<" books (price = "
<<a*500<<")"<<endl;
cout<<"You have bought "<<x<<" T-shirt (price = "
<<x*700<<")"<<endl;
cout<<"You have bought "<<y<<" shoes (price = "
<<y*1000<<")"<<endl;
cout<<"Total = "<<a*500+x*700+y*1000<<endl;


   return 0;
}