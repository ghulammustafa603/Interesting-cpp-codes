#include<iostream>
using namespace std;

int main()
{
int x;

    cout << "Enter a number.\n";
    cin>>x;
    switch(x%2){
    case 0:
    cout<<"It is a even number\n";
    break;
    case 1:
    cout<<"It is a odd number\n";
    }
    return 0;
}