#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> Puzzle;
    for (int i = 0; i < M; i++)
    {
        int A;
        cin >> A;
        Puzzle.push_back(A);
    }
    int MIN_Dif = INT_MAX;
    sort(Puzzle.begin(), Puzzle.end());
    for (int i = 0; i < M - N + 1; i++)
    {
        if (MIN_Dif > (Puzzle[i + N - 1] - Puzzle[i]))
            MIN_Dif = Puzzle[i + N - 1] - Puzzle[i];
    }
    cout << MIN_Dif;
}
