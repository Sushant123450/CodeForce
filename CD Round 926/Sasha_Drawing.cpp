#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long n, k;
        cin >> n >> k;
        if (k == (4 * n - 2))
            cout << k / 2 + 1 << endl;
        else if (!(k & 1))
            cout << k / 2 << endl;
        else
            cout << k / 2 + 1 << endl;
    }
    return 0;
}