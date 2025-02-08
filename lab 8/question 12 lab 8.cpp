#include <iostream>
 using namespace std ; 
int main () { 
int n,larger(0);
cout<<"Enter the size of array:";
cin>>n;
int array1[n];
for(int i=0; i<n; i++){
cout<<"Enter value number"<<i+1<<":";
cin>>array1[i];

if(i==0){
larger=array1[i];

}
if(array1[i]>larger)
larger=array1[i];
}
cout<<"The largest value is:"<<larger<<endl;
 return 0;
 } 
   