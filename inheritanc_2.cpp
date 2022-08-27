#include <iostream>

class Parent
{
protected:
    int basedata = 12;
};

class Child1 : public Parent
{

};

class Child2 : public Parent
{

};

class GrandChild : public Child1, public Child2
{
public:
    int getData()
    {
        return Child1::basedata;
    }
};


int main() 
{
    GrandChild obj;
    std::cout << obj.getData();
}