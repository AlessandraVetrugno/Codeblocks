#include <iostream>

using namespace std;

struct Acquisto{
    string descrizione;
    double costo;
    int quantità;
    };
struct Data{
    int giorno;
    int mese;
    int anno;
};
struct Scontrino{
    Data data_acquisto;
    Acquisto righe [100];
    int numero_righe;
};
void menu()
{
    cout<<"1- inserire dati scontrino"<<endl;
    cout<<"2- calcolare il totale dello scontrino"<<endl;
    cout<<"3- conoscere la quantità totale di uno scontrino"<<endl;
}
double costo_tot (Scontrino s) //sapere il totale della spesa
{
   double somma=0;
   for (int i=0; i<s.numero_righe;i++)
   {
       somma=somma+s.righe[i].costo*s.righe[i].quantità;

   }
   return somma;
}
int quantità_tot (Scontrino s)
{
    int conta=0;
    for (int i=0;i<s.numero_righe;i++)
    {
        if (s.righe[i].quantità >=1)
            conta++
    }
    return conta;
}





int main()
{

    return 0;
}
