#include<iostream>
using namespace std;

int main(){
int a;
cout<<"Enter a number of month like(1 to 12).\n";
cin>>a;
switch(a){
	case 1:
		cout <<"It is january.\n";
	case 2:
		cout <<"It is febuary.\n";
	case 3:
		cout <<"It is march.\n";
	case 4:
		cout <<"It is april.\n";
	case 5:
		cout <<"It is may.\n";
	case 6:
		cout <<"It is june.\n";
	case 7:
		cout <<"It is july.\n";	
	case 8:
		cout <<"It is agust.\n";
	case 9:
		cout <<"It is september.\n";	
	case 10:
		cout <<"It is october.\n";
	case 11:
		cout <<"It is november.\n";
	case 12:
		cout <<"It is december.\n";
	default:
	cout<<"Invalid month number!\n";
}

return 0;
}


