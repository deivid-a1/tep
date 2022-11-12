#include <iostream>
#include <vector>
std::vector<int> vet1 {1, 3, 5, 7, 8, 10, 12};
std::vector<int> vet2 {4, 6, 9, 11};


int find(int a, int b)
{
    int c = 0, d = 0, h;
    for (auto i = 0; i < 7; i++)
    {
        if (a == vet1[i]) c = 1;
        if (b == vet1[i]) d = 1;

        if (c == 1 && d == 1) return 1; 
    }

    c = 0;
    d = 0;

    for (auto i = 0; i < 4; i++)
    {
        if (a == vet2[i]) {c = 1;}
        if (b == vet2[i]) {d = 1;}
        
        if (c == 1 && d == 1) return 1;
    }

    return 0;
}

int main()
{

    int a, b;

    std::cin >> a >> b;

    if (a == 2 && b == a)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    { 
        if (find(a, b) == 0) std::cout << "No" << std::endl;
        else std::cout << "Yes" << std::endl;
    }
    
    return 0;
}