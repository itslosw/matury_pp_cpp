#include <bits/stdc++.h>
using namespace std;
int main()
{
    string  a, smax, smin;
    ifstream f("cyfry.txt");
    int suma;
    int suma_max = 0;
    int suma_min = 999999999;
    while(f>>a)
    {
        suma = 0;
        for(int i=0; i<a.size(); i++)
                   suma = suma + (int)a[i] - 48;
        if(suma > suma_max) {
                suma_max = suma;
                smax = a;
                }
        if(suma < suma_min) {
                suma_min = suma;
                smin = a;
        }

    }
cout << "Suma max = " << smax << ' '<< suma_max << "\n";
cout << "Suma min = " << smin << ' '<<suma_min << "\n";
}
