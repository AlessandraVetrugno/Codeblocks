#include <iostream>

using namespace std;
struct Docente{
    string nome;
    string cognome;
    int anno_nascita;
    string materia_insegnata;
};
struct Classe{
    int anno;
    string sezione;
    int numero_alunni;
    Docente tutor;
};


int main()
{

    return 0;
}
