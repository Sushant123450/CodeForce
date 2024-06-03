#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    float Sum=0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        Sum+=A;
    }
    cout << (float) Sum/N << endl;
}