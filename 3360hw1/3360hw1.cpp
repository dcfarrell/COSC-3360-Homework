#include <iostream>
#include <fstream>
#include <string>
#include <unistd>
#include <sys/types>
#include <sys/wait>

using namespace std;

int main(string fileName) 
{
	ofstream inputFile;
	inputFile.open(fileName);
	if (inputFile.is_open()) 
	{
		cout << "Opened " << fileName << ".";
	}
	else
	{
		cout << "Could not open " << fileName << ".";
	}
	inputFile.close();
	return 0;
}