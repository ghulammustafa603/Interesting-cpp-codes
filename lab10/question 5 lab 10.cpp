#include<iostream>
using namespace std;
void bubbleSort(int* value[])
{	int* temp[5];
	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			if(value[i]>value[j])
			{
				int k=0;
			temp[k]=value[i];
			value[i]=value[j];
			value[j]=temp[k];
					k++;
			}
		}
	}
	for(int i=0; i<5; i++)
	{
		cout<<value[i]<<" ";
	}
		
}
int main()
{
	int *v[5]={11,2,33,4,45};
	
		bubbleSort(&v);
return 0;
}

