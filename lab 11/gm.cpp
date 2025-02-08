#include <iostream>
#include <fstream>
using namespace std ;

int main ()
{
	ofstream Myfile("filename.txt");
	//Myfile<<"Files can be tricky, but it is fun enough!\n";
	//Myfile<<"Files can be tricky, but it is fun enough!\n";
cout<<Myfile;
	Myfile.close();
	
	string myText;
	ifstream MyReadFile("filename.txt");
	while (getline(MyReadFile, myText)){
		cout<<myText<<"\n";
	}
	MyReadFile.close();
  system ("pause");
  return 0 ;
  }

