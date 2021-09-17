#include<iostream>
using namespace std;
int main()
{

    int tab[2][2];
    int x,a,b,c,d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    cout << "podaj liczbe" << endl;
    cin >> x;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            tab[i][j] = x;

            if (i == 1) {
                if (j == 1) {
                    a = x;
                }
                else { b = x; }
            }
            else {
                if (j == 1) {
                    c = x;
                }
                else { d = x; }
            }
        }
        cout << endl;
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    int w = (a * d) - (c * b);
        cout << w << endl;
    return 0;
}