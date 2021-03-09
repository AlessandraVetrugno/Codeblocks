#include <iostream>

using namespace std;

int main()
{
    int n,d, div;
    cin>> n;
    cin >> d;
    div = n;
    while (div > 1)
    {
        if(n % div == 0 && d % div == 0 )
        {
            n = n /div;
            d = d/div;
        }
        div--;

    }
    if  ( d < 0 )
    {
        n = -n;
        d = -d;
    }
    if (d == 1)
        cout << n << endl;
    else
        cout << n << "/" << d << endl;
    return 0;
}
