#include <iostream>
#include <string>


class Something
{
public:
    Something() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

class Example
{
public:
    Example () {topSecretValue = 42; }
public:
    bool somePublicBool = 1;
    int somePublicInt = 12;
    std::string somePublicString = "Barev";
    int topSecretValue;
    int getval(Something* tmp)
    {
        Example *ptr = reinterpret_cast<Example* const>(tmp);
        return ptr->topSecretValue;
    }
};



int main()
{
    Something obj;
    Example* ptr;
    std::cout << ptr->getval(&obj);
    return 0;
}
