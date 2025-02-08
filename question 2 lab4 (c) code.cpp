#include<iostream> 
using namespace std; 
int main(){ 
int a; 
cout<<"Enter a number of month like(1 to 12).\n";
 cin>>a; 
switch(a){ 
	case 1: 
case 2:
case 12:		
cout <<"It is winter season.\n";
break;
 	case 3: 		
case 4:
cout <<"It is spring season.\n"; 	
break;
case 5: 		
case 6:
case 7:
case 8:
case 9:
cout <<"It is summer season.\n"; 
break;
	case 10: 	
case 11:
	cout <<"It is autumn season.\n"; 
break;
default: 
	cout<<"Invalid month number!\n"; } 
return 0; } 