#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file("cyfry.txt");
    int s;
    int parzyste = 0;

    while(file >> s){
        if(s%2 == 0)
            parzyste++;
    }

    cout << "Odp. a = " << parzyste << endl;
}
