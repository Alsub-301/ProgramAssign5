//creating a class stack using templates for generic implementation
#pragma once
#include <vector>
//template implementation
template<typename Item>
class Stack{
    public:
        Stack();
        void Push();
        void Pop();
        Item Top();
        bool IsEmpty();
        int size();
    private:
        std::vector<Item>;
        

};