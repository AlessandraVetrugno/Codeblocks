#include <iostream>

using namespace std;

int main()
{
    int n, N=1, i, a, prec=0;
    cout << "Inserire il numero: " << endl;
    cin >> n;
    while ( n > 1 ) {
        N=N*n;
        n--;

    }
    if ( n == 0 )
        cout << "Il fattoriale e': " << "0" << endl;
    else
        cout << "Il fattoriale del numero " << n << " e': " << N << endl;
    return 0;
}
