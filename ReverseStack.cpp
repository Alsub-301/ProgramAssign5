
#include "ReverseStack.h"
#include "Stack.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//Function will return true if reversing was complete and false if failed
bool ReverseContent(ifstream& inputFile, ofstream& outputFile){
    Stack<char> stk;
    char ch;

    if (!inputFile.good() || !outputFile.good()) return false;
    //open input file
    while (inputFile.get(ch)){
        stk.Push(ch);
    }

    while(!stk.IsEmpty()){
        char top = stk.Top();
        outputFile.put(top);
        stk.Pop();
        if (!outputFile){
            cout << "Could not write into file\n";
            return false;
        }
    }
    return true;
}
