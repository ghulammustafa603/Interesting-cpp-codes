#include<iostream>
using namespace std;
int main()
{
int array[10];

for(int i=0; i<10; i++)
{
	cout<<"Enter value "<<i+1<<":"<<endl;
	cin>>array[i];
	
}
	int *ptr;
	ptr=&array[0];
	
		for(int i=0; i<10; i++)
		{
		cout<<"Value "<<i+1<<"="<<*(ptr+i)<<endl;
			ptr++;
		}





return 0;
}

