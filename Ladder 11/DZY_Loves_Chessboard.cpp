#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> Cells(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Cells[i];
    }
    for(int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Cells[i][j] == '.')
            {
                if (i%2 == j%2)
                {
                    Cells[i][j] = 'B';
                }
                else
                {
                    Cells[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << Cells[i] << endl;
    }
}