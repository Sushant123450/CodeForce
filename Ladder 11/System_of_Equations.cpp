#include <bits/stdc++.h>
using namespace std;

int main()
{#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K;
    cin >> K;
    int A[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> A[i];
    }
    sort(A, A + 12, greater<int>());
    int Growth = 0;
    for (int i = 0; i <=12; i++)
    {
        if (Growth < K)
        {
            Growth += A[i];
            if (i == 11 && Growth < K)
            {
                cout << -1;
                break;
            }
        }
        else
        {
            cout << i;
            break;
        }
    }
}

    int N;
    cin >> N;
    int M;
    cin >> M;
    int count = 0;
    for (int i = 0; i <= min(N, M); i++)
    {
        for (int j = 0; j <= min(N, M); j++)
        {
            if ((i * i + j == N) && (i + j * j == M))
            {
                count++;
            }
        }
    }
    cout << count;
}
