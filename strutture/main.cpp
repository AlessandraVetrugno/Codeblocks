#include <iostream>
using namespace std;

struct Giocatore
{
    char nome [30];
    char cognome [30];
    int altezza;
    int numero_maglia;
    int giorno;
    int mese;
    int anno;
    };
int main()
{
    cout<< "CHI E' IL PIU ALTO"<< "?"<<endl;
    cout<< "CHI E' IL PIU GIOVANE"<< "?"<< endl;
    Giocatore a,b,c, giovane, alto;
    cout<< "inserisci i dati del primo giocatore"<< endl;
    cout<<"inserisci il nome: "<< endl;
    cin>>a.nome;
    cout<< "inserisci il cognome: " << endl;
    cin>>a.cognome;
    cout<< "inserisci la sua altezza: "<< endl;
    cin>>a.altezza;
    cout<< "inserisci il suo numero di maglia: "<< endl;
    cin>>a.numero_maglia;
    cout << "inserisci il giorno di nascita: " << endl;
    cin>>a.giorno;
    cout << "inserisci il mese di nascita: "<< endl;
    cin>>a.mese;
    cout<< "inserisci l'anno di nascita: "<< endl;
    cin>>a.anno;
    cout<< "il nome del primo giocatore è: "<< a.nome << "," << " il suo cognome è: "<< a.cognome<< ","<< "il primo giocatore e' alto: "<<a.altezza<< "cm"<< ","<< "il suo numero di maglia e': "<< a.numero_maglia<<","<<" la sua data di nascita è il: "<<a.giorno<< "-"<<a.mese<< "-"<< a.anno<<endl;
    cout<<"inserisci i dati del secondo giocatore"<< endl;
    cout<<"inserisci il nome: "<< endl;
    cin>>b.nome;
    cout<< "inserisci il cognome: " << endl;
    cin>>b.cognome;
    cout<< "inserisci la sua altezza: "<< endl;
    cin>>b.altezza;
    cout<< "inserisci il suo numero di maglia: "<< endl;
    cin>>b.numero_maglia;
    cout << "inserisci il giorno di nascita: " << endl;
    cin>>b.giorno;
    cout << "inserisci il mese di nascita: "<< endl;
    cin>>b.mese;
    cout<< "inserisci l'anno di nascita: "<< endl;
    cin>>b.anno;
    cout<< "il nome del secondo giocatore è': "<< b.nome<< endl;
    cout<< "il cognome del secondo giocatore è': "<< b.cognome<<endl;
    cout<< "il secondo giocatore e' alto: "<< b.altezza<< "cm"<< endl;
    cout<< "il suo numero di maglia e' : "<< b.numero_maglia<< endl;
    cout << "la sua data di nascita è' il : "<< b.giorno<< "-"<< b.mese<< "-"<< b.anno<< endl;
    cout<< "inserisci i dati del terzo giocatore"<< endl;
    cout<<"inserisci il nome: "<< endl;
    cin>>c.nome;
    cout<< "inserisci il cognome: " << endl;
    cin>>c.cognome;
    cout<< "inserisci la sua altezza: "<< endl;
    cin>>c.altezza;
    cout<< "inserisci il suo numero di maglia: "<< endl;
    cin>>c.numero_maglia;
    cout << "inserisci il giorno di nascita: " << endl;
    cin>>c.giorno;
    cout << "inserisci il mese di nascita: "<< endl;
    cin>>c.mese;
    cout<< "inserisci l'anno di nascita: "<< endl;
    cin>>c.anno;
    cout<< "il nome del terzo giocatore e': " << c.nome<< endl;
    cout<< "il cognome del terzo giocatore e': "<< c.cognome<<endl;
    cout<< "il terzo giocatore e' alto: "<< c.altezza<<endl;
    cout<< "il suo numero di maglia e': "<<c.numero_maglia<< endl;
    cout << "la sua data di nascita è' il : "<< c.giorno<< "-"<< c.mese<< "-"<< c.anno<< endl;
    if (a.anno > b.anno)
        giovane=a;
    else if (a.anno < b.anno)
        giovane=b;
    else
    {
        if (a.mese < b.mese)
            giovane=b;
        else if (a.mese> b.mese)
            giovane=a;
        else
        {
            if (a.giorno < b.giorno)
                giovane=b;
            else if (a.giorno > b.giorno)
                giovane=a;
            else
            giovane =a ; //b
        }
    }
    if (c.anno > giovane.anno)
        giovane=c;
    else if (c.anno < giovane.anno)
        giovane=giovane;
    else
    {
        if (c.mese<  giovane.mese)
            giovane= giovane;
        else if(c.mese>b.mese)
            giovane=c;
        else
    {
        if (c.giorno < giovane.giorno)
            giovane=giovane;
        else if (c.giorno > giovane.giorno)
            giovane=c;
            else
                giovane=c;

    }
    }
     if (a.altezza > b.altezza && a.altezza> c.altezza)
            alto=a;
    if (b.altezza> a.altezza && b.altezza > c.altezza)
        alto=b;
    if (c.altezza>a.altezza && c.altezza> b.altezza)
        alto=c;
     cout << "il piu giovane è'il giocatore: "<< giovane.nome<< endl;
     cout<< giovane.cognome<< endl;
     cout<<giovane.altezza<<"cm" << endl;
     cout<<" n. maglia: "<< giovane.numero_maglia<< endl;
     cout<<"nato il: "<< giovane.giorno<< "-"<< giovane.mese<< "-"<< giovane.anno<< endl;
     cout<<"il piu alto e': "<< alto.nome<<endl;
     cout<<alto.cognome<<endl;
     cout<<alto.altezza<<"cm"<<endl;
     cout<<"n. maglia: "<< alto.numero_maglia<<endl;
     cout<<"nato il: "<<alto.giorno<<"-"<<alto.mese<<"-"<<alto.anno<<endl;

    return 0;
}
