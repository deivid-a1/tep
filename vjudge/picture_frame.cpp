#include <iostream>
#include <vector>
#include <string.h>



int main()
{
    int h, w;
    int extra_column = 2;

    std::cin >> h >> w;
    std::vector<std::vector<char>> matriz(h + extra_column, std::vector<char> (w+extra_column, '#'));

    std::string palavra;

    for (auto i = 0; i < h+extra_column; i++)
    {
        for(auto j = 0; j < w+extra_column; j++)
        {
            if (j <= w) {
                if (j == 0 || i == 0 || i == h + 1)
                    std::cout << matriz[i][j];
                else
                {
                    std::cin >> matriz[i][j];
                    std::cout << matriz[i][j];
                }
            }
            else std::cout << matriz[i][j] << std::endl;
        }
    }


    return 0;
}