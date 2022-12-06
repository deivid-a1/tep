#include <bits/stdc++.h>

using namespace std;

void read_solve_vet(int N)
{
	vector<int> ocrr(N + 1, 0);
	int number;
	for (int i = 0; i < N ; i++)
	{		
		cin >> number;
		ocrr[number]++;
	}
	int sum = 0, ans = 0;	
	for(int i = 1; i <= N; i++)
	{
		sum = sum +ocrr[i];
		ans = max(ans, (sum + i - 1) / i);
	}
	cout << ans << endl;
}

int main()
{
	int T, N;

	cin >> T;

	for(int i = 0; i < T; i++)
	{
		cin >> N;
		read_solve_vet(N);
	
	}



	return 0;
}
