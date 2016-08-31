//Paul Hubbard hw3 
#include "main.h"
using namespace std;

	

string getFileName(ios_base::open_mode parm){
		
		fstream iFile;
		fstream oFile;
		string inFileName = "";
		string outFileName = "";
		int count = 1;
			
		if(parm == ios::in){
			while(count != 0){
				cout << "Enter an input file name that exists: ";
				getline(cin,inFileName);
				iFile.open(inFileName.c_str() , ios::in);
				if(iFile.good() != true){
					cout << "?Invalid file name : file does not exist" << endl;
					count++;
					iFile.clear();
				}else{
					count = 0;
					iFile.close();
					return inFileName;
					
				}
			}
		}
		
		if(parm == ios::out){
		int count1 = 1;
			while(count1 != 0){
				cout << "Enter the name of an output file that doesn't exist: ";
				getline(cin, outFileName);
				oFile.open(outFileName.c_str() , ios_base::out | ios_base::in);
				if(oFile.good() == true){
					cout << "?Invalid file name : file exists" << endl;
					count1++;
					oFile.clear();
					oFile.close();
	
				}else{
					count1 = 0;
					oFile.close();
					return outFileName;
				}
			}
		}	
}	

double volume(double stuffX, double stuffY , double stuffZ){
	double varPi = 3.14;
	double stuffV = (4.0/3.0)*(varPi*stuffX*stuffY*stuffZ);
	return stuffV;			
}

string transposeString(char char1, char char2, int int1, float float1){
	string outFile;
	outFile = to_string(float1 - 0.000001) + " " +  char2 + " " + to_string(int1) + " " + char1;
	return outFile;
}
string combineString(string word1, string word2, string word3, string word4, string string2){
	string outFile;
	outFile = word4 + " " + word1 + " " + word3 + " " + word2 + " " + string2;
	return outFile;
}
double distPlaneCalc(double varW, double varX, double varY, double varZ){
	double dist = sqrt( pow((varW - varX), 2.0) + pow((varY - varZ), 2.0) );
	return dist;
}
double slopeOfLine(double varW, double varX, double varY, double varZ){
	double dist = (varY - varZ) / (varW - varX);
	return dist;
}

int main(int argc, char **argv)
{
	fstream inFile;
	fstream outFile;
	double planeDist = 0.0;	
	double varX = 0.0;
	double varY = 0.0;
	double varZ = 0.0;
	double varW = 0.0;
	float float1 = 0.0;
	char char2;
	char char1;
	int int1 = 0;	
	double elipV = 0.0;
	double slopeOline = 0.0;
	string inFileNames;
	string outFileNames;
	string string1;
	string transpose;
	string word1;
	string word2;
	string word3;
	string word4;
	string string2;
	string combineStrings;

	inFileNames = getFileName(ios::in);
	outFileNames = getFileName(ios::out);
	
	inFile.open(inFileNames.c_str(), ios::in);
	outFile.open(outFileNames.c_str(), ios::out);
	
	inFile >> varW >> varX >> varY >> varZ >> int1 >> char1 >> float1 >> char2;

	inFile.ignore(8127,'\n');
	getline(inFile, string2);

	inFile >> word1 >> word2 >> word3 >> word4;

	elipV = volume(varX,varY,varZ);
	outFile << elipV << endl;

	transpose = transposeString(char1,char2,int1,float1);
	outFile << transpose << endl;

	combineStrings = combineString(word1, word2, word3, word4, string2);
	outFile << combineStrings << endl;
	
	planeDist = distPlaneCalc(varW, varX, varY, varZ);
	outFile << planeDist << endl;
	
	slopeOline = slopeOfLine(varW, varX, varY, varZ);
	outFile << slopeOline << endl;

	return 0;
}







