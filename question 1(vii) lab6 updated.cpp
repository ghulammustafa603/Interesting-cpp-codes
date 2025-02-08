#include<iostream>
using namespace std;

int main()
{

for (int a=1; a<=5; ++a){
for (int b=1; b<=a; ++b){

cout<<"* ";
}
cout<<endl;
      }
    for(int a=1; a<=4; ++a){
    for(int b=a; b<=4; ++b){
    cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}