#include<iostream>
using namespace std;

int main()
{
float x,y,z=0,high(0),low(0);

    cout << "Write the total number of integer\n";
   cout<<"How many numbers do you have?>";

cin>>y;
if(y<0){
cout<<"Sorry, you have entered an invalid input."<<endl;
cout<<"Thank You."<<endl;}
else if(y==0){
cout<<"Opps, you don't have any number for me to process."<<endl;
cout<<"Thank You.";}
else
{
cout<<"Please enter a number_"<<1<<"-->";
cin>>z;

high=z;
low=z;

for(x=2; x<=y; x++){ 
cout<<"Please enter a number_"<<x<<"-->";
cin>>z;

if(z>=high){
high=z;
}
 if(z<=low){
low=z;}
}


cout<<"The highest number is : "<<high<<endl;
cout<<"The lowest number is : "<<low<<endl;
cout<<"Thank You";
}
     return 0;
}