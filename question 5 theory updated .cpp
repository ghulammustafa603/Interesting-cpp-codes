#include<iostream>
using namespace std;

int main()
{
int x,y,sum(0);
cout<<"Enter the number till which do you want to sum"<<endl;
cin>>y;
cout<<"(";
    for(x=1; x<=y; x++){
    if(x!=1)
    {
    cout<<"+";
    }
    cout<<x;
sum=sum+x;
}
cout<<")"<<endl;
cout<<"sum="<<sum<<endl;
      return 0;
}