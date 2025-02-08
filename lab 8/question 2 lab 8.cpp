#include <iostream>
using namespace std ;
int main ()
{
int size;
cout<<"Enter the size of array:";
   cin>>size;
   int array[size],sum(0);
   for(int i=0; i<size; i++){
   	cout<<"Enter the value of number"<<i+1<<":";
   	cin>>array[i];
   	sum=sum+array[i];
   }
   cout<<"Sum="<<sum<<endl;
   return 0;
}


