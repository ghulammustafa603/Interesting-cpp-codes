#include<iostream>
using namespace std;

int main()
{
int x,y,sum(0);

    for(x=1; x<=10; x++){
    cout <<"Enter the "<<x<<" number: ";
  cin>>y;
sum=sum+x;
}
cout<<"sum="<<sum<<endl;
      return 0;
}