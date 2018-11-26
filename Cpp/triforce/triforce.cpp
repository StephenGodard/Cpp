#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(){
	string line;
	fstream myfile;
myfile.open("triforce.txt");
while(myfile.eof()==false)
{
	getline(myfile, line);
	cout << line << endl;
}



myfile.close();
}