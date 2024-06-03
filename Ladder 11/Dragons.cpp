#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S;
    cin >> S;
    int N;
    cin >> N;
    vector < pair<int, int> > Dragon(N);
    for (int i = 0; i < N; i++)
    {
        int X, Y;
        cin >> X >> Y;
        Dragon[i].first = X;
        Dragon[i].second = Y;
    }
    sort(Dragon.begin(), Dragon.end());
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        if (S > Dragon[i].first)
        {
            S += Dragon[i].second;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "NO";
    else
        cout << "YES";
}
