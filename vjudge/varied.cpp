#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> vet(130, 0);

int main()
{

	std::string name_string;

	cin >> name_string;

	for (int i = 0; i < name_string.length(); i++)
	{
		if (vet[name_string[i]] == 0)
			vet[name_string[i]] = 1;
		else {cout << "no" <<endl; return 0;}
	}
	cout << "yes" << endl;


	return 0;
}
