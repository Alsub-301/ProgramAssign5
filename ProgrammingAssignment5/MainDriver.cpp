#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Stack.h"
#include "ReverseStack.h"
#include "StackUtils.h"


using namespace std;

int main(){
    //reading and outputing files
    //ifstream inputFile;
    //ofstream outputFile;

    string inFilename, outFilename;
    bool checkStack;

    //getting user input for input file name
    cout << "Please enter input filename: ";
    getline(cin, inFilename);
    cout << "\n";

    cout << "Please enter output filename: ";
    getline(cin, outFilename);
    cout << "\n";

    //open input file
    ifstream inputFile(inFilename);
    //ifstream inputFile("input.txt");
    if (!inputFile.is_open()){
        cout << "Error: Could not open input file " << inFilename << endl;
        return 1;
    }

    ofstream outputFile(outFilename);
    //ofstream outputFile("output.txt");
    if (!outputFile.is_open()){
        cout << "Error: Could not open output file " << outFilename << endl;
        return 1;
    }

    //checking if the contents were successfully reversed
    checkStack = ReverseContent<char>(inputFile, outputFile);
    if (checkStack == true){
        cout << "Successfully reversed strings\n";
    } else {
        cout << "Could not reverse strings\n";
    }

    inputFile.close();
    outputFile.close();
    return 0;
}