#include <bits/stdc++.h>

using namespace std;

class No
{
    public:
        int prioridade, frequencia, tempo;
        string name;
        No(int p, int f, int t, string n)
        {
            prioridade = p;
            frequencia = f;
            tempo = t;
            name = n;
        }
};

bool operator<(const No &n1, const No &n2)
{
	bool diffTime = n1.tempo > n2.tempo;
	bool diffPriority = n1.prioridade > n2.prioridade;
	return (n1.tempo == n2.tempo) ? diffPriority : diffTime;
}


int main()
{
    int T, N, K, number;
    string name;
    cin >> T;

    while(T--)
    {
        priority_queue<No> pq;
        cin >> N >> K;
        
        for(int i = 0; i < N; i++)
        {
            cin >> name >> number;
            pq.push(No(i, number, number, name));

        }
        
        for (int i = 0; i < K; i++)
        {
            No no = pq.top(); pq.pop();
            cout << no.tempo << ' ' << no.name << endl;
            pq.push(No(no.prioridade, no.frequencia, no.tempo + no.frequencia, no.name));
        }
    }

    return 0;
}