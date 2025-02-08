#include<iostream>
using namespace std;

int main()
{
   float x,a,b;
 
     cout << "which type of conversion do you want\n";
   cout<<"1) PKR to £\n";
    cout<<"2) £ to PKR\n";
    cin>>x;
    if(x==1){
    cout<<"You have selected '1' Enter the amount:\n";   
    cin>>a;
    cout<<"Converted amount is:"<<a/254<<" pound"<<endl;
    }
    else if(x==2){
    cout<<"You have selected '2' Enter the amount:\n";   
    cin>>b;
    cout<<"Converted amount is:"<<254*b<<" PKR"<<endl;
    }
    else {
    cout<<"Invalid input!\n";
    
    }
    return 0;
}