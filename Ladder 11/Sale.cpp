#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int M;
    cin >> M;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A,A+N);
    int Sum = 0;
    for (int i = 0; i < M; i++)
    {
        if(A[i]<0)
            Sum+=A[i];
    }
    cout << abs(Sum);
}
