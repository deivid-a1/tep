#include <iostream>
#include <vector>

using namespace std;

vector<int, pair<int, string>> vet;

int main()
{
    int T, N, K;
    pair<int, string> par;

    cin >> T;

    for(int k = 0; k < T ; k++)
    {
        cin >> N >> K;
        
        for(int i = 0; i < N; i++)
        {
            cin>> par.second >> par.first;
            
            vet.push_back(par);
        }
        
        for(int t = 0, i = 0; t<K; t++, i++)
        {
            if(i%N == 0) i = 0; 

            cout << vet[i].first <<' '<< vet[i].second << endl;
            vet[i].first += vet[i].first;
        }
    }

    return 0;
}