#include <iostream>

using namespace std;

int fatorial(int dado);

int main(int argc, char *argv[])
{
	
	
	cout << fatorial(5) << endl; 

	return 0;
}


int fatorial(int dado)
{
	if ((dado == 1) || (dado == 0))
		return 1;
	else
		return fatorial(dado-1)*dado;
}
