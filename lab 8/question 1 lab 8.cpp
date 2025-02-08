#include <iostream>
using namespace std ;
int main ()
{
	int size;
	cout<<"Enter the size of array:"<<endl;
	cin>>size;
	
	int array[size];
for(int i=0; i<size; i++ ){
	cout<<"Enter value number" <<i+1<<":";
	cin>>array[i];
	cout<<endl;
	}
cout<<"The numbers in reverse order are:"<<endl;
for(int j=size-1; j>=0; j--){
cout<<array[j]<<" ";	
}
   return 0;
}


