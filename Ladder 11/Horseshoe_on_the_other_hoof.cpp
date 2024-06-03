#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <int> Colour;
    for (int i = 0; i < 4; i++)
    {
        int A;
        cin >> A;
        Colour.insert(A);
    }
    cout << 4-Colour.size() << endl;
}