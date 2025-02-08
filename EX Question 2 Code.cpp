#include<iostream>
using namespace std;

int main()
{
int num;

    cout <<"Enter five digit integer number\n";
    cin>>num;
    cout<< num%10<<endl;
    cout<<num%100/10<<endl;
    cout<<num%1000/100<<endl;
    cout <<num%10000/1000<<endl;
    cout <<num%100000/10000<<endl;
      return 0;
}