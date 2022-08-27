#include <iostream>

class Singleton
{
public:
    static Singleton *getinstance();
    ~Singleton() {instance = nullptr;}
private:
    Singleton() = default;
    static Singleton *instance;
};

int main()
{
    Singleton *ptr = Singleton::getinstance();
    std::cout << "ptr :" << ptr << std::endl;
    Singleton *str = Singleton::getinstance();
    std::cout << "str : " << str << std::endl;
    Singleton *tmp = Singleton::getinstance();
    std::cout << "tmp : " << tmp << std::endl;
    delete ptr;
}

Singleton *Singleton::instance = nullptr;
Singleton *Singleton::getinstance()
{
    if (!instance)
    {
        instance = new Singleton();
        std::cout << "First call: ";
        return instance;
    }

    std::cout << "Else call: ";
    return instance;
}
