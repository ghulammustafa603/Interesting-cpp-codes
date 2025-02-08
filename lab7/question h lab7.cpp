 #include<iostream>
using namespace std;
int add(int);
int main()
{

int range;
cout<<"Enter the range up to which you want to find the sum:";
cin>>range;
cout<<"The sum of all "<<range<<" positve integer is "<<add(range);
return 0;
}
int add(int range){
int sum(0);
for(int i=1; i<=range; i++){
sum=sum+i;
}

return sum;
}
    