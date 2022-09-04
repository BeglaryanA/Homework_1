#include <iostream>

class OS_Interface
{
public:
    virtual void Mac_OS() = 0;
};

class Mac_Book : public OS_Interface
{
public:
    void Mac_OS() 
    {
        std::cout << "This notebook only support Mac OS!" << std::endl;
    }
};

class Adapter_Interface
{
public:
    virtual void Linux() = 0;
};

class Adapter : public Adapter_Interface
{
private:
    OS_Interface* os_interface;
public:
    Adapter (OS_Interface* ob) 
    {
        os_interface = ob;
    }
    void Linux() 
    {
        os_interface->Mac_OS();
    }
};

int main() 
{
    OS_Interface* ptr = new Mac_Book();
    Adapter_Interface* adapter = new Adapter(ptr);
    adapter->Linux();
}   