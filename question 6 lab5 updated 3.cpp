#include<iostream>
using namespace std;

int main()
{
   int x(1),sum(0);
 
while ( x>=0)
 {
   cout << "Enter any integer number: \n";
cin>>x;
if(x>0 && x<=30){
sum=sum+x;
}
else if(x>30){
cout<<"This number is greater than 30 and won't be calculated.\n";
}


 x++;} 
cout<<"The sum is "<<sum<<endl;
   return 0;
}