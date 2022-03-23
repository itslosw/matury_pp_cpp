#include <bits/stdc++.h>
using namespace std;
bool czy_palindrom(string s)
{
    int p, k;
    p = 0;
    k = s.size()-1;
    while(p<k){
        if(s[p] != s[k]) return false;
        p++;
        k--;
    }
    return true;
}
int main()
{
    int licznik = 0;
    string s;
    ifstream f("hasla.txt");
    while(f>>s){
        if(czy_palindrom(s)) licznik++;

    }
    cout << "odp. b = " << licznik << "\n";
}
