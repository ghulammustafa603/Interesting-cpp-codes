#include<iostream>
using namespace std;
int main(){
	int range,a;
	cout<<"Enter the range upto which the loop should run\n";
	cin>>range;
	for(a=1; a<=range;++a){
		cout<<a<<endl;
	
	if(a==2*range){
	
		cout<<range<<"is even"<<endl;
}
	else {
	
		cout<<range<<"is odd"<<endl;
}
}
return 0;
}

