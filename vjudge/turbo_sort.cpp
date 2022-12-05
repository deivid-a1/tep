#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, number;

    cin >> N;
    vector<int> vet;

    for (int i = 0; i < N; i++)
    {
        cin >> number;
        vet.push_back(number);
    }

    sort(vet.begin(), vet.end());

    for(int valor : vet)
    {
        cout << valor << endl;
    }

    return 0;
}