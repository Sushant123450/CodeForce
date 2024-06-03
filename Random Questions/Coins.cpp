#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int K, N;
        cin >> N >> K;
        bool Flag = 0;
        for (long long int i = 0; i < (N / K) + 1; i++)
        {
            if (((N - (K * i)) % 2) == 0)
            {
                Flag = 1;
                break;
            }
        }
        if (Flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}