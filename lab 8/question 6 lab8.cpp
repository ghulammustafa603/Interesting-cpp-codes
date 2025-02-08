#include <iostream>
 using namespace std ; 
int main () { 
int n;
cout<<"Enter the size of array:";
cin>>n;
int num[n],x;
for(int i=0; i<n; i++){
cout<<"Enter the "<<i+1<<" number:";
cin>>num[i];
}
cout<<"The values on the ODD indices are:\n";
for(int j=0; j<n; j++){
if(j%2!=0){
cout<<num[j]<<" ";
}
}



 return 0;
 } 
    