#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    pair<int, int> Index;
    int Min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if ((i + 1) == N)
        {
            if (Min > abs(A[i] - A[0]))
            {
                Min=abs(A[i] - A[0]);
                Index.first = i + 1;
                Index.second = 1;
            }
        }
        else
        {
            if (Min > abs(A[i] - A[i + 1]))
            {
                Min=abs(A[i] - A[i + 1]);
                Index.first = i+1;
                Index.second = i + 2;
            }
        }
    }
    cout << Index.first << " " << Index.second;
}