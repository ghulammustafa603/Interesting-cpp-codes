#include <iostream>
 using namespace std ; 
int main () { 
int n,m;
cout<<"Enter the size of array:";
cin>>n;
int array1[n];
for(int i=0; i<n; i++){
cout<<"Enter value number"<<i+1<<":";
cin>>array1[i];
}

cout<<"Enter the value which want search from this array:";
 cin>>m;
int j,find(0);
for(int j=0; j<n; j++){
find=array1[j];

if(find==m){

cout<<m<<" is present at the "<<j<<" index";
}
 else if(find!=m){
cout<<m<<" is not present in the array"<<endl;
break;}
}

return 0;
 } 
   