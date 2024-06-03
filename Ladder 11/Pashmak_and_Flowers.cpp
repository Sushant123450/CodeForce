#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int Pairs = 0;
    vector<long long int> Flowers(N);
    unordered_map<long long int, long long int> Frqy;

    for (long long int i = 0; i < N; i++)
    {
        cin >> Flowers[i];
        Frqy[Flowers[i]]++;
    }

    sort(Flowers.begin(), Flowers.end());
    long long int Max_Beauty = Flowers[N - 1] - Flowers[0];

    if (Frqy.size() == 1)
    {
        Pairs = (Frqy[Flowers[0]] * (Frqy[Flowers[0]] - 1)) / 2;
    }
    else
    {
        Pairs = Frqy[Flowers[N - 1]] * Frqy[Flowers[0]];
    }
    cout << Max_Beauty << " " << Pairs;
}
