#include <iostream>

using namespace std;

struct Acquisto{
    string descrizione;
    double costo;
    int quantit�;
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
    cout<<"3- conoscere la quantit� totale di uno scontrino"<<endl;
}
double costo_tot (Scontrino s) //sapere il totale della spesa
{
   double somma=0;
   for (int i=0; i<s.numero_righe;i++)
   {
       somma=somma+s.righe[i].costo*s.righe[i].quantit�;

   }
   return somma;
}
int quantit�_tot (Scontrino s)
{
    int conta=0;
    for (int i=0;i<s.numero_righe;i++)
    {
        if (s.righe[i].quantit� >=1)
            conta++
    }
    return conta;
}





int main()
{

    return 0;
}
