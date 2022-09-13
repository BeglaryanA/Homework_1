#include <iostream>

class Stack
{
public:
    Stack() { top = -1; } //constructor
    void push(int var) { st[++top] = var; } // put number on stack
    int pop() { return st[top--]; } // take number off stack
    void print() 
    {
        for (int i = 0; i < top; ++i) 
        {
            std::cout << top << std::endl;
            std::cout << st[i];
        }
    }
protected:
    enum { MAX = 3 }; // size of stack array
    int st[MAX]; // stack: array of integers
    int top; // index to top of stack
};

class NewStack: public Stack
{

};

int main() 
{
    Stack obj;
    obj.push(5);
    obj.push(6);
    obj.print();
    
    // obj.push(6);
    //     obj.push(5);
    // obj.push(6);
    
    // obj.print;
    return 0;
}