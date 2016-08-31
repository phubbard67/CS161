//Paul Hubbard HW2

#include "main.h"
using namespace std; 

int main(int argc, char **argv){
	fstream iFile;
	fstream oFile;	
	string inFileName("");
	string outFileName("");
	double  stuffX = 0.0,
	        stuffY = 0.0,
		stuffW = 0.0,
		stuffZ = 0.0,
		stuffV = 0.0,
		stuffD = 0.0,
		stuffS = 0.0,
		stuffA = 0.0,
		stuffB = 0.0,
		stuffP = 0.0;
	double  varPi = 3.14;

	  float float1 = 0.0;
	   char char1;	
	   char char2;
	   int  int1 = 0;
	   
	string buffer;
	string string1;
	string word1;
	string word2;
	string word3;
	string word4;

		cout << "Enter an input file name that exists: ";
		getline (cin,inFileName);
		iFile.open(inFileName.c_str(), ios::in);

		cout << "Enter the name of an output file that does not exist: ";
		getline (cin,outFileName);

		if (iFile.good() != true) 
		{
			cout << "The file " << inFileName << " does not exist. Please try again." << endl;
			iFile.clear();
			oFile.clear();
			iFile.close();
			oFile.close();
			return 0;
		}
		else	
		{
			
			cout << "File " << inFileName << " exists." << endl;
			oFile.open(outFileName.c_str(), ios::out);
		}


		

		iFile >> stuffW >>  stuffX >>  stuffY >>  stuffZ >> int1 >> char1 >> float1 >> char2;
		
		iFile.ignore(8127,'\n');		
	       	getline(iFile, string1);

		iFile >> word1 >> word2 >> word3 >> word4; 

		stuffV = (4.0/3.0)*(varPi*stuffX*stuffY*stuffZ);
		oFile << stuffV << endl;
		stuffD = sqrt( pow((stuffW - stuffX), 2.0) + pow((stuffY - stuffZ), 2.0) );
		oFile << stuffD << endl;
		stuffS = (stuffY - stuffZ) / (stuffW - stuffX);
		oFile << stuffS << endl;
		oFile << float1 << " " << char2 << " " << int1 << " " <<  char1 << endl;
		oFile << word4 << " " << word1 << " " << word3 << " " << word2 << " " << string1 << endl;
		stuffP = (pow(stuffX, stuffY) + pow(stuffW, stuffZ)) - ((int1 + stuffZ)/(float1 * stuffW));
		oFile << fixed;
		oFile << stuffP << endl;
		oFile << "Paul Hubbard hw2" << endl;


	iFile.clear();
	oFile.clear();
	iFile.close();
	oFile.close();
	
	return 0;
}

