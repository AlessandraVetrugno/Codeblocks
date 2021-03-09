#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int n, tiro1, tiro2;
   cout << "gioco dei dadi"<< endl ;
   srand (time(NULL));
   tiro1= rand () % 12+1;
   cout <<tiro1<< endl ;
   if (tiro1=7 || tiro1=11)
        cout << "hai vinto"<< endl ;
        else if (tiro1=2|| tiro1=3 || tiro1=12)
            cout << "hai perso"<< endl;
            else
                srand (time(NULL));
                tiro1


    return 0;
}
