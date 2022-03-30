#include <bits/stdc++.h>
using namespace std;
bool rosnacy(string s)
{
    int p = 0;
    while(p<s.size()-1)
    {
        if(s[p+1]<=s[p]) return false;
        p++;
    }
    return true;
}
int main()
{
    string  a;
    ifstream f("cyfry.txt");
        while(f>>a)
    {
        if (rosnacy(a)) cout << a << "\n";
    }

}
