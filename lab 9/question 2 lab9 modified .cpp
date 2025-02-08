#include<iostream>
#include<string>
using namespace std;
int count(string x){
 int y=x.length();
int z(0);
    for(int i=0; i<y; i++)
    {
    if(x[i]==' '){
    
      z=z+1;
      }
    }
   cout<<"Number of words are:";
return z+1;
}
int main()
{
    string word;
    cout << "Enter any words:";
    getline(cin,word);
    cout<<count(word);  return 0;
}