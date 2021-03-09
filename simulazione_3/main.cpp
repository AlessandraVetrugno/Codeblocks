#include <iostream>

using namespace std;

struct Data{
    int giorno;
    int mese;
    int anno;
};

struct Conto_corrente {
    string n_conto;
    Data  dat;
    double saldo;
    };


double media (Conto_corrente c [], int n, int a)
{
    double media=0, conta=0;
    for (int i=0; i<n; i++)
    {
        if (c[i].dat.anno == a){
            media+=c[i].saldo;
            conta++;
        }
    }
    if (conta==0)
        return -1;
    elsef
    media=media/conta;
    return media;
}
int main()
{
    Conto_corrente conto[] = {
        {
            1,
            {10,3,2018},
            12768.23
        },
        {
            2,
            {11,5,2018},
            1768.43
        },
        {
            3,
            {11,7,2017},
            1278.23
        }

    };
    cout << media(conto, 3, 2016) << endl;
    return 0;
}
