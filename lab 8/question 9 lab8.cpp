#include <iostream>
 using namespace std ; 
int main () { 
int array1[5]={44,5,30,78,66};
int array2[6]={4,50,60,7,6,76};
 int array3[11];

cout<<"The values of of first array are:\n";
for(int i=0; i<5; i++){
cout<<array1[i]<<" ";
}
cout<<endl;
cout<<"The values of second array are:\n";
for(int j=0; j<6; j++){
  cout<<array2[j]<<" ";
}
cout<<endl;
for(int k=0; k<5; k++){

 array3[k]=array1[k];
}
for(int x=5; x<11; x++){

array3[x]=array2[x-5];
}


cout<<"The values of third array are:\n";
for(int y=0; y<11; y++){
cout<<array3[y]<<" ";
}
 return 0;
 } 
    