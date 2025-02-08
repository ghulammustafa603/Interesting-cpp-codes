#include<iostream> 
using namespace std; 
int main(){ 
int a; 
cout<<"Enter a number of month like(1 to 12).\n";
 cin>>a; 
switch(a){ 
	case 1: 		
cout <<"It is january.\n";
break;
 	case 2: 		
cout <<"It is febuary.\n"; 	
break;
case 3: 		
cout <<"It is march.\n"; 
break;
	case 4: 	
	cout <<"It is april.\n"; 
break;
	case 5: 		
cout <<"It is may.\n"; 
break;
	case 6: 	
	cout <<"It is june.\n"; 
break;
	case 7: 
		cout <<"It is july.\n";	 
break;
	case 8: 		
cout <<"It is agust.\n"; 
break;
	case 9: 	
	cout <<"It is september.\n";	
break;
 	case 10: 		
cout <<"It is october.\n";
 break;
	case 11: 
		cout <<"It is november.\n";
break;
 	case 12: 	
	cout <<"It is december.\n"; 	
break;
default: 
	cout<<"Invalid month number!\n"; } 
return 0; } 