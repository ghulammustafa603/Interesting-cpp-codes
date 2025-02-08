#include <iostream>
 using namespace std ; 
int main () { 
int array1[4]={4,8,12,16};
cout<<"The value in first array are:"<<endl;
 for(int i=0; i<4; i++){

cout<<array1[i]<<" "; 
 }  
cout<<endl;
int array2[4];
cout<<"The value in second array are:"<<endl;
for(int j=0; j<4; j++){
   array2[j]=array1[j];
cout<<array2[j]<<" "; 
}
 return 0;
 } 
    