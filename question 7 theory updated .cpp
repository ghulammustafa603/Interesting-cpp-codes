#include<iostream>
using namespace std;

int main()
{
int a,b,max(0),min(0);
cout<<"Enter six numbers:\n";

for(a=1; a<=6; a++){
    cout << "Enter number "<<a<<"_:";
    cin>>b;
    if(a==1){
    max=b;
    min=b;
    }
    
    if(b>max){
    max=b;
    }
   
    if(b<min){
    min =b;
    }
    }
   
    cout<<"Maximum="<<max<<endl;
    cout<<"Minmum="<<min<<endl;
    
    return 0;
}