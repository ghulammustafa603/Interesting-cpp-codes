#include <iostream>
 using namespace std ; 
int main () { 
int n;
cout<<"Enter the size of array:";
cin>>n;
int array1[n];
for(int i=0; i<n; i++){
cout<<"Enter the "<<i+1<<" number:";
cin>>array1[i];
}
cout<<"Values of of first array are\n";
for(int j=0; j<n; j++){
cout<<array1[j]<<" ";
}
cout<<endl;
int array2[n];
for(int k=0; k<n; k++){
   array2[k]=array1[k];
}
cout<<"Values of second array are\n";
for(int m=n-1; m>=0; m--){
cout<<array2[m]<<" ";
}

 return 0;
 } 
    