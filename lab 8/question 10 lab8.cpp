#include<iostream>
#include<string>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the number of students:";
	cin>>size;
	string name[size];
	int	pf[size];
	double math[size];
	double english[size];		
	double ps[size];
	double obtained[size];
	double percentage[size];
	double grade[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Write name of student"<<i+1<<":";
		cin>>name[i];
	}
	for(int i=0; i<size; i++)
	{
		cout<<"Write programing marks student"<<i+1<<":";
		cin>>pf[i];
	}
	for(int i=0; i<size; i++)
	{
		cout<<"Write math marks student"<<i+1<<":";
		cin>>math[i];
	}
	for(int i=0; i<size; i++)
	{
		cout<<"Write English marks student"<<i+1<<":";
		cin>>english[i];
	}
	for(int i=0; i<size; i++)
	{
		cout<<"Write P.S marks student"<<i+1<<":";
		cin>>ps[i];
	}
	for(int i=0; i<size; i++)
	{
		obtained[i]=pf[i]+math[i]+english[i]+ps[i];
	}
	for(int i=0; i<size; i++)
	{
		percentage[i]=obtained[i]*100/400;
	}
	cout<<"=============================================================================================="<<endl;
	cout<<"Name	Programming	Math	English	\tP.S \tObtained	Percentage	Grade"<<endl;
	cout<<"=============================================================================================="<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<name[i]<<"\t\t"<<pf[i]<<"\t"<<math[i]<<"\t"<<english[i]<<"\t\t"<<ps[i]<<"\t"<<obtained[i]<<"\t\t"<<percentage[i]<<"\t\t";
		if(percentage[i]>=80 && percentage[i]<=100)
		cout<<"A"<<endl;
		else if(percentage[i]>70 && percentage[i]<=79)	
		cout<<"B"<<endl;
		else if(percentage[i]> 60 && percentage[i]<=69)	
		cout<<"C"<<endl;
		else if(percentage[i]<60)	
		cout<<"Fail"<<endl;
	}

	
	
return 0;
}

