#include <iostream>
 using namespace std ; 
int main () { 
int array1[5]={44,5,30,78,66};
int array2[5]={4,50,60,7,6};
 int array3[5];

cout<<"The values of of first array are:\n";
for(int i=0; i<5; i++){
cout<<array1[i]<<" ";
}
cout<<endl;
cout<<"The values of second array are:\n";
for(int j=0; j<5; j++){
  cout<<array2[j]<<" ";
}
cout<<endl;
for(int k=0; k<5; k++){

 array3[k]=array1[k]+array2[k];
}
cout<<"The values of third array are:\n";
for(int m=0; m<5; m++){
cout<<array3[m]<<" ";
}
 return 0;
 } 
    