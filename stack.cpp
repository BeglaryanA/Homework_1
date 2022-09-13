#include <iostream>

class Stack
{
public:
    Stack() { top = -1; }                   // constructor
    void push(int var) { st[++top] = var; } // put number on stack
    int pop() { return st[top--]; }         // take number off stack
protected:
    enum{MAX = 3};           // size of stack array
    int st[MAX]; // stack: array of integers
    int top;     // index to top of stack
};

class NewStack
{
public:
    NewStack() { top = -1; }                   
    void push(int var) 
    { 
        if(top >= MAX) 
        {
            std::cout << "Stack is full!" << std::endl;
            return;
        }
        st[++top] = var; 
    } 
    int pop() 
    { 
        if (top < 0) 
        {
            std::cout << "Stack is empty!" << std::endl;
        }
        return st[top--]; 
    }
    void print() 
    {
        for (int i = 0; i < top; ++i) 
        {
            std::cout << st[i] << " ";
        }
    }
protected:
    enum{MAX = 3};           
    int st[MAX];
    int top;
};

int main() 
{
    NewStack obj;
    
    return 0;
}