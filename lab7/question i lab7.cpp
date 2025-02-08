 #include<iostream>
using namespace std;
void printTable(int);
void printTable (int,int);
int main()
{

int num;
cout<<"Enter any number to print its table:";
cin>>num;
//printTable(num);
printTable (num,0);
return 0;
}
void printTable(int x){
for(int i=1; i<=10; i++){
cout<<x<<"×"<<i<<"="<<i*x;
cout<<endl;
}
}
void printTable(int x,int range){
cout<<"Enter the range up to which it prints table of a number:";
cin>>range;
for(int i=1; i<=range; i++){
cout<<x<<"×"<<i<<"="<<i*x;
cout<<endl;
}
}
    