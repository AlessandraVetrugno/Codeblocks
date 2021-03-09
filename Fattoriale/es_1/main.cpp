#include <iostream>

using namespace std;

struct Docente{

    string nome;
    string cognome;
    int anno_nascita;
    string materia;

} ;

struct Classe{
    int anno;
    string sezione;
    int numero_alunni;
    Docente docente_tutor;
    };
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
