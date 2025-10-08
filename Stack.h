//creating a class stack using templates for generic implementation
//Using vectors as main source of ADT


/*
    Next goal is turn this into truly generic
    - create reverse printing function
*/
#pragma once
#include <vector>
#include <iostream>
#include <fstream>

//template implementation
template<typename Item>
class Stack{
    public:
        Stack() = default; //constructor
        void Push(Item); //done
        void Pop(); //done
        Item Top(); //done
        bool IsEmpty(); //done
        int Size(); //done
        void PrintStack(); //done
    private:
        std::vector<Item> stack;
        
};

//Push function to add item to end of stack
template<typename Item>
void Stack<Item>::Push(Item value){
    stack.push_back(value);
}

//Pop function to remove "top" or most recently added item
template<typename Item>
void Stack<Item>::Pop(){
    stack.pop_back();
}

//function that calls the TOP element or most recently added element
template<typename Item>
Item Stack<Item>::Top(){
    return stack.back();
}

//checks if stack is empty
template<typename Item>
bool Stack<Item>::IsEmpty(){
    return stack.empty();
}

//Returns the size of the stack
template<typename Item>
int Stack<Item>::Size(){
    return stack.size();
}

//function to print out stack
template<typename Item>
void Stack<Item>::PrintStack(){
    for (Item elements : stack){
        std::cout << elements << " ";
    }
    std::cout << "\n";
}