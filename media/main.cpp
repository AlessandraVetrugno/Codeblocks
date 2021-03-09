#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float media, N, succ,flag=0, somma=0,quanti=0;
    cin >> N;
    while(N != -1)
    {
        somma = somma + N;
        quanti++;
        cin >> N;
    }
    media = somma / quanti;
//    if (pre!=0)
//    {
//        while (flag==0)
//        {
//            cin>> succ;
//            somma=pre+succ;
//            pre=succ;
//        }
//        conta++;
//    }
//     else
//        {
//            media= somma/conta;
//            cout << fixed << setprecision(2) << media;
//        }
//    }
    cout << fixed << setprecision(2) << media << endl;
    return 0;

}

