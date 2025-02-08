#include<iostream>
#include<string>
using namespace std;

int main()
{
string num1, num2;

    cout << "Enter phone number:";
    getline(cin,num1);
   num2=num1.substr(0,4);
    if(num2=="0300")
    {
    cout<<"Moblink!"<<endl;
    }
    else if(num2=="0333")  
    {
    cout<<"Ufone!"<<endl;
    } 
    else if(num2=="0315")    
    {
    cout<<"Zong"<<endl;
    }
    else if(num2=="0345")    
    {
    cout<<"Telenor"<<endl;           
     return 0;
    }
}