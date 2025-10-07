#include "Stack.h"
#include "ReverseStack.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
    //reading and outputing files
    //ifstream inputFile;
    //ofstream outputFile;

    string inFilename, outFilename;
    Stack<int> stack1;
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
    if (!inputFile.is_open()){
        cout << "Error: Could not open input file " << inFilename << endl;
        return 1;
    }

    ofstream outputFile(outFilename);
    if (!outputFile.is_open()){
        cout << "Error: Could not open output file " << outFilename << endl;
        return 1;
    }

    ReverseContent(inputFile, outputFile);
    /*cout << "Starting with empty stack, expected result is true(1): ";
    checkStack = stack1.IsEmpty();
    cout << checkStack << "\n";
    cout << "Adding in items 23, 44, and 67\n";
    stack1.Push(23);
    stack1.Push(44);
    stack1.Push(67);

    cout << "Check size of stack, expected result is 3\n";
    cout << stack1.Size() << "\n";

    cout << "Printing list\n";
    stack1.PrintStack();
    cout << "\nNow checking if stack is empty, expected result is false(0): ";
    checkStack = stack1.IsEmpty();
    cout << checkStack << "\n";

    cout << "Removing recently added element\n";
    int item1 = stack1.Top();
    stack1.Pop();
    cout << item1 << " was removed from stack\n";

    cout << "Checking size again, expected result is 2: ";
    cout << stack1.Size() << "\n";
    cout << "\nPrinting new list\n";
    stack1.PrintStack();*/
    inputFile.close();
    outputFile.close();
}