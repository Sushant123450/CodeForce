#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int Max = INT_MIN;
    int Min = INT_MAX;
    int MaxI, MinI;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        if (Max < A)
        {
            Max = A;
            MaxI = i;
        }
        if (Min >= A)
        {
            Min = A;
            MinI = i;
        }
    }
    if (MinI > MaxI)
        cout << MaxI + N - MinI - 1 << endl;
    else
        cout << MaxI - MinI + N - 2 << endl;
}