#pragma once
#include <fstream>

//function that will read in a file, reverse its content, line by line and then output into another file
template<typename T>
bool ReverseContent(std::ifstream& inputFile, std::ofstream& outputFile){
    Stack<T> stk;
    T item;

    if (!inputFile.good() || !outputFile.good()) return false;

    //Read items from file and push into a stack
    while (inputFile.get(item)){
        if (item == '\n'){
            //writing the reversed items into the output file
            while(!stk.IsEmpty()){
                outputFile.put(stk.Top());
                stk.Pop();
            }
            outputFile.put('\n');
            continue;
        }
        stk.Push(item);
    }
    while (!stk.IsEmpty()){
        outputFile.put(stk.Top());
        stk.Pop();
    }

    return true;
}
