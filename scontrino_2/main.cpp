#include <iostream>

using namespace std;

struct Acquisto {
    string descrizione;
    double costo;
    int quantita;
    };

struct Data{
    int giorno;
    int mese;
    int anno;
    };
struct Scontrino {
    Data data_acquisto;
    Acquisto righe[100];
    int numero_righe;
    string codice_barre;
};
// funzione: tot della spesa
double costo_tot (Scontrino s)
{
    double somma=0;
    for(int i=0;i<numero.righe;i++)
    {
        somma+=s.righe[i].costo* s.righe[i].quantita;
    }
    return somma;
}
int n_quantita (Scontrino s)
{
    int conta=0;
    for (int i=0; i< s.numero_righe;i++)
    {
         if (s.righe[i].quantita >= 1)
        conta++;

    }

    return conta;
}
Acquisto riconosci_prodotto (Scontrino s, string codice)
{
    for (int i=0;i< s.numero_righe; i++)
    {
        if(s.righe[i].codice_barre == codice)
            return s.righe[i];
    }
}

//Acquisto a = riconosci_prodotto(s,"12345");
//cout << a.descrizione << endl;

int main()
{

    return 0;
}
