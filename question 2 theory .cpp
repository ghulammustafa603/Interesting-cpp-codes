#include<iostream>
using namespace std;

int main()
{
float score_isl(0),score_prog(0),score_ict(0);
float score_phy(0),score_math(0),score_average;
cout << "Enter the score of islamiat:\n";
cin>>score_isl;
cout << "Enter the score of programming:\n";
cin>>score_prog;
cout << "Enter the score of ICT:\n";
    cin>>score_ict;
   cout << "Enter the score of physics:\n";
   cin>>score_phy;
cout<< "Enter the score of math:\n";
 cin>>score_math;
score_average=score_isl+score_prog+score_ict+score_phy,score_math/5; 
 cout << "The average score is: average_score="<<score_average;  
return 0;

}
