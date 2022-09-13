#include <iostream>
#include <vector>

void move_zero(std::vector<int> &);
void swap(int &, int &);
void print(std::vector<int> &);
int main()
{
    std::vector<int> vec{0, 1, 0, 3, 12};
    print(vec);
    
    move_zero(vec);
    print(vec);
    return 0;
}

void print(std::vector<int> &vec)
{
    for (auto it : vec)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
}

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void move_zero(std::vector<int> &vec)
{
    int j = 0;
    int size = vec.size();
    for (int i = 0; i < size; ++i)
    {
        if (vec[i] != 0)
        {
            swap(vec[i], vec[j]);
            ++j;
        }
    }
}