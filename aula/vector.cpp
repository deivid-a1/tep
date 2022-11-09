#include <iostream>
#include <vector>

int main()
{
	std::vector<std::vector <int>> matriz(10, std::vector<int>(10, 0));
	std::cout << "print" << std::endl;
	for(int i = 0; i< 10; i++){
		for(int j=0;j<10;j++){
			std::cout << matriz[i][j] << std::endl;
		}
	}
	return 0;
}
