#include <bits/stdc++.h>

using namespace std;

int main()
{
	char first, last;
	string str;

	cin >> str;
	
	first = str[0];
	last = str[str.length() - 1];

	cout << first << str.length() - 2 << last << endl;	

	return 0;
}
