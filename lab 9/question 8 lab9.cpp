#include <iostream>
#include <string>
using namespace std;
int main() 
{
	 	int x(0),y(0),z(0);
   string words,search;
   cout << "Write some words:"<<endl;
   getline(cin,words);
   int len=words.length();
   cout<<"What word do you want to find:"<<endl;
   cin>>search;
   for(int i=0; i<len; i++){
   	if(words[i]==' ')
   	{
	z=z+1;   
    }
    }
   for(int i=0; i<z; i++)
   {
   
   x=words.find(search,y);
   
   if(x==string::npos)
   break;	
   y=x+1;
   cout<<x<<" ";
   }
   return 0;
}
