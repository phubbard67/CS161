//Paul Hubbard hw3 
#include "main.h"
using namespace std;

int main(int argc, char **argv)
{
	fstream inFile;
	fstream outFile;
	string inFileName = " ";
	string outFileName = " ";	
	char stuff = 0;
	int upCase = 0;
	int lowCase = 0;
	int numDigits = 0;
	int numLineDig = 0;
	int numLineDig2 = 0;
	int numChar = 0;
	int numWords = 0;
	int numLines = 0;
	int numWordDigLow = 0;
	int digit = 0;
	char buffer;
	char buffer2;
	string buffString;
	string word;
	string buffString2;

	cout << "Enter an input file name: ";
	getline(cin, inFileName);
	inFile.open(inFileName.c_str(), ios::in);
	
	//gets the number of characters
	while(inFile.get(buffer)){
		if(buffer != EOF){
			numChar++;
		}

	}
	
	//clears and restarts the input
	inFile.clear();
	inFile.seekg(0, ios::beg);
	
	//gets the number of digits, 
	//lower and upper case characters
	while(inFile.get(stuff))
	{
	       	if(isupper(stuff)){
			upCase++;
		}
		else if(islower(stuff)){
			lowCase++;
		}
		else if(isdigit(stuff)){
			numDigits++;
		}
	}

	inFile.clear();
	inFile.seekg(0,ios::beg);

	//gets the number of lines	
	while(getline(inFile,buffString)){
		numLines++;
	}

	inFile.clear();
	inFile.seekg(0,ios::beg);
	
	//gets the number of words
	while(inFile >> word) {
		numWords++;
	}
	
	inFile.clear();
	inFile.seekg(0,ios::beg);

	

	
	cout << numLineDig << endl;

	cout << "The number of upper case characters is: "
	     << upCase << endl;
	cout << "The number of lower case characters is: "
	     << lowCase << endl;
	cout << "The number of digits in the file are: "
	     << numDigits << endl;
	cout << "The number of all characters in the file are: "
	     << numChar << endl;
	cout << "The number of 'words' in the file are: " 
	     << numWords << endl;
	cout << "The number of lines in the file are: " 
             << numLines << endl;
	
	//reverse the name of the out file
	outFileName = inFileName;
	reverse(outFileName.begin(),outFileName.end());
	
	//open output file
	outFile.open(outFileName.c_str(), ios::out);
	
	//reverse the lines of the file
	while(getline(inFile, word)){
		reverse(word.begin(), word.end());
		outFile << word << endl;


        }
        inFile.clear();
        inFile.close();
        outFile.clear();
        outFile.close();	
	

	return 0;


}













