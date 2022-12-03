#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> vet_string;

string entrada, entrada_anterior, copy_string, teste;



int main()
{
    int a1 = 0, b1 = 0, a2=0, b2=0, info_anterior = 0;


    // for(int k = 0; k < 3; k++)
    while(getline(cin, entrada))
    {
        // getline(cin, entrada);
        a1 = b1 = 0;
        
        for (int i = 0; i < entrada.length(); i++)
        {
            if(entrada[i] == ' ')
            {
                copy_string = entrada.substr(a1, i);
                a1 = i + 1;


                if (info_anterior == 1)
                    {
                    vet_string.push_back(entrada_anterior + copy_string);
                    info_anterior = 0;
                    }
                else vet_string.push_back(copy_string);

                cout << entrada_anterior + copy_string << endl;
                continue;
            }
            if (i == entrada.length() - 1 && entrada[i] != '-')
            {

                copy_string = entrada.substr(a1, i + 1);

                if (info_anterior == 1)
                {
                    vet_string.push_back(entrada_anterior + copy_string);
                    info_anterior = 0;
                }
                else
                    vet_string.push_back(copy_string);
                
                break;
            }
            if(entrada[i] == '-' && i == entrada.length() - 1)
            {
                
                copy_string = entrada.substr(a1, i);
                

                if (info_anterior == 1)
                {
                    entrada_anterior = entrada_anterior + copy_string;
                }
                else entrada_anterior = copy_string;

                info_anterior = 1;
                
                break;
            }
        }     
    }

    for(int i = 0; i < vet_string.size(); i++)
    {
        cout << vet_string[i] << endl;
    }

    return 0;
}