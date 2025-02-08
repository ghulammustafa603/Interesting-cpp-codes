#include<iostream>
using namespace std;

int main()
{
float n,s,a,b,ps,sum(0),av;
cout<<"This program averages test score.\n";
cout<<"For how many students do you have scores?  ";
cin>>n;
cout<<" How many test score does each student have?  ";
cin>>s;
for (a=1; a<=n; ++a){
for(b=1; b<=s; ++b){

cout<<"Enter score "<<b<<" for student "<<a<<" : ";
cin>>ps;
sum=sum+ps;
}
cout<<"The average score for student "<<a<<" is "<<sum/s<<endl;
sum=0;

}
    return 0;
}