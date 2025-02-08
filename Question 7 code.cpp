#include<iostream>
using namespace std;

int main()
{
cout<<"     MARKSHEET    \n";

int sub1,sub2,sub3,sub4,sub5,obtained_marks,percentage;

    cout << "enter the marks of sub1 \n";
    cin>>sub1;
    //each subject contain total marks 100:
  cout << "enter the marks of sub2 \n";
cin>>sub2;
cout << "enter the marks of sub3 \n";
cin>>sub3;
cout << "enter the marks of sub4 \n";
cin>>sub4;
cout << "enter the marks of sub5 \n";
cin>>sub5;
cout<<"obtained_marks=";
obtained_marks=sub1+sub2+sub3+sub4+sub5;
cout<<obtained_marks<<endl;

cout<<"percentage=";
percentage=obtained_marks*100/500;
cout<<percentage;

   return 0;
}