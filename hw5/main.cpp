//Paul Hubbard hw3 
#include "main.h"
using namespace std;

typedef struct{
        string word;
        array<int,100> lines;
        } wordBlock;
int main(int argc, char **argv) {
        char bufferTwo;
        int words = 0;
        string buffer ("");
        int chars = 0;
        int lines = 0;
        char byte;
	
	

        while((byte = cin.get()) != EOF) {
                chars++;
                buffer.append(1,byte);
        }
        lines = count(buffer.begin(), buffer.end(), '\n');
        istringstream in(buffer);
        while(in.peek() != EOF) {
                in >> buffer;
                words ++;
        }
        cout << endl << lines << " lines, " << words << " words, " << chars << " bytes" << endl;
}
