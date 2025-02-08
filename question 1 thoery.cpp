#include<iostream>
using namespace std;

int main()
{
int x,y,m,b;

    cout << "Enter the value of slope:\n";
   cin>>m;
  cout << "Enter the value of x-coordinate:\n";
    cin>>x;
      cout << "Enter the value of y-intercept:\n";
    cin>>b;
    y=m*x+b;
      cout << "The value of y-coordinate is: y="<<y;
     return 0;
}