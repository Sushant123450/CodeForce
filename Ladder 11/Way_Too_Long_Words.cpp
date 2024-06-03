#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<string, int>> Words(N);
    for(int i = 0; i < N; i++)
    {
        string A;
        cin >> A;

        Words[i].first = A;
        Words[i].second = A.size();
    }
    for (int i = 0; i < N; i++)
    {
        if (Words[i].second > 10)
            cout << (Words[i].first)[0] + to_string(Words[i].second - 2) + (Words[i].first)[Words[i].second - 1] << endl;

        else
            cout << Words[i].first << endl;
    }
}