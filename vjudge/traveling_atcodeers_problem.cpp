#include <iostream>

using namespace std;

int main()
{
    int N, min, max, entrada;
    cin >> N;
    cin >> entrada;
    min = max = entrada;
    N--;
    for(int i =0; i < N; i++)
    {
        cin >> entrada;
        if (min > entrada)
            {min = entrada; continue;}
        if (max < entrada)
            max = entrada;
    }

    cout << max - min << endl;

    return 0;
}