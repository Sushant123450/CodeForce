#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N_c;
    cin >> N_c;
    vector <int> Coin(N_c);
    int Sum_left=0;
    for (int i = 0; i <N_c; i++)
    {
        int N;
        cin >> N;
        Sum_left+=N;
        Coin.push_back(N);
    }
    sort(Coin.begin(),Coin.end(), greater<int>());
    int Sum_self=0;
    for (int i = 0; i < count; i++)
    {

    }
    
    cout << count;
}