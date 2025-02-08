#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word,reverse;
    cout<<"Write any word:";
    cin>>word;
    int y=word.length();
    for(int i=y-1, j=0; i>=0; i--, j++)
    {
    reverse[j]=word[i];    
    }
    for(int i=0; i<y; i++)
    {
    if(word[i]==reverse[i])
    {
    cout<<"Word is palindrome!"<<endl;
       break;
     }
    else if(word[i]!=reverse[i])
    {
    cout<<"Word is not palindrome!"<<endl;
    break;
    }
    }
    return 0;
}