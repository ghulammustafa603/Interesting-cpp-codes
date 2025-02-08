#include<iostream>
using namespace std;

int main(){
	char a,b;
cout<<"Do you have ID card? (y/n)\n";
cin>>a;
if (a=='n'){
	cout<<"You are not allowed to enter:\n";
	}
    if (a=='y'){
	 
   	cout<<"What is your department\n";
   	cout<<"a=CS\n";
   	cout<<"b=BBA\n";
   	cout<<"c=EE\n";
   	cout<<"d=EDU\n";
  cout<<"Enter your department:\n";
	cin>>b; 
	   }
   	 if(b=='a'){
		cout<<"CS department go to block 1\n"; 
}
 if(b=='b'){
		cout<<"BBA department go to block 2\n"; 
}
 if(b=='c'){
		cout<<"EE department go to block 3\n"; 
}
 if(b=='d'){
		cout<<"EDU department go to knowledge center\n"; 
}



return 0;
}


