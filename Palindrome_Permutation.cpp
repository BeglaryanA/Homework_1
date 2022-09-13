#include <iostream>
#include <unordered_map>

bool palindrom_per(std::string&);
std::string to_uppercase(std::string&);

int main() 
{
    std::string str = "Tact Coa";
    std::cout << std::boolalpha<< palindrom_per(str);
    return 0;
}

std::string to_uppercase(std::string& str) 
{
    std::string res;
    for (int i = 0; i < str.size(); ++i) 
    {
        if (str[i] <= 'Z' && str[i] >= 'A') 
        {
            str[i] += 32;
        }
        if (str[i] != ' ') 
        {
            res += str[i];
        }
    }
    return res;
}

bool palindrom_per(std::string& str)
{
    str = to_uppercase(str);
    int size = str.size();
    int arr[26] {};
    for (int i = 0; i < size; ++i) 
    {
        char ch = str[i] - 97;
        ++arr[ch];
    }
    int count = 0;
    for (int i = 0; i < 26; ++i) 
    {
        if (arr[i] % 2 == 1) 
        {
            ++count;
        }
    }
    if (count <= 1) 
    {
        return true;
    }
    return false;
}