
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
    char top;

    if (!inputFile.good() || !outputFile.good()) return false;
    //open input file
    while (inputFile.get(ch)){
        if (ch == '\n'){
            while (!stk.IsEmpty()){
                top = stk.Top();
                outputFile.put(top);
                stk.Pop();
            }
            outputFile.put('\n');
            continue;
        }
        if (isspace(ch)){
            continue;
        }
        stk.Push(ch);
    }
    while (!stk.IsEmpty()){
        top = stk.Top();
        outputFile.put(top);
        stk.Pop();
    }
        
    
    return true;
}
