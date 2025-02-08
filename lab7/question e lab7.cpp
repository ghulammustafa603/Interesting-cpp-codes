#include <iostream>
using namespace std ;

double per(double obt, int total)
{
	return obt*100/total;
}
int main ()
{
double obt(57.8);
int total(60);
cout<<"Percantage= "<<per(obt,total)<<"%"<<endl;
   system ("PAUSE") ;
   return 0 ;
}


