#include <iostream>
#include <vector>

int main()
{
	int N, M, a, b;
	std::cin >> N >> M; 
	
	

	std::vector <int> vet(N + 2,0);

	for (int i = 0; i<M ; i++)
	{
		std::cin >> a >> b;	
		vet[a] = vet[a] + 1;
		vet[b] = vet[b] + 1;
		
	}

	for (int i = 1; i<N+1; i++)
	{
		std::cout<<vet[i]<<std::endl;
	}
	return 0;
}

