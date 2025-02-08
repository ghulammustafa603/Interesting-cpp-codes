#include <iostream>
using namespace std;

int main ()
{
float percentage;
cout<<"Enter the percentage:\n";
cin>>percentage;
if( percentage>=0 && percentage<=100 )
{
if( percentage>=90 )
cout<<"Your grade is A1:";
else if( percentage>=80 )
cout<<"Your grade is A:";
else if( percentage>=70 )
cout<<"Your grade is B:";
else if( percentage>=60 )
cout<<"Your grade is C:";
else if( percentage<60)
 cout<<"You are fail!";
 

}

 system("pause");
 return 0 ;

}



