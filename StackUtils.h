#pragma once
#include <ostream>
#include "Stack.h"

template<typename T>
void PrintStack(const Stack<T>& s, std::ostream& out = std::cout){
    Stack<T> temp = s;
    while (!temp.IsEmpty()){
        out << temp.Top() << " ";
        temp.Pop();
    }
    out << "\n";
}