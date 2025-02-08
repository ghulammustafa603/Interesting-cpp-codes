#include <iostream>
 using namespace std ; 
int main () { 
int n,smallest(0);
cout<<"Enter the size of array:";
cin>>n;
int array1[n];
for(int i=0; i<n; i++){
cout<<"Enter value number"<<i+1<<":";
cin>>array1[i];

if(i==0){
smallest=array1[i];

}
if(array1[i]<smallest)
smallest=array1[i];
}
cout<<"The smallest value is:"<<smallest<<endl;
 return 0;
 } 
   