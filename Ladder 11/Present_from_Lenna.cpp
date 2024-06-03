#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            if(i==0)
            cout << j;
            else
            cout << j << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            if(j==0)
            cout << j;
            else
            cout << j << " ";
        }

        cout << endl;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            if(i==0)
            cout << j;
            else
            cout << j << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            if(j==0)
            cout << j;
            else
            cout << j << " ";
        }
        cout << endl;
    }
}
