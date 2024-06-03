#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    unordered_map<int, int> Frqy;
    for (auto &it : S)
    {
        Frqy[it]++;
    }
    int O_count = 0;
    for (auto &it : Frqy)
    {
        if (it.second % 2 == 1)
            O_count++;
    }
    if (O_count == 0 || O_count == 1)
        cout << "First";
    else if(O_count%2==0)
        cout << "Second";
    else
        cout << "First";
}
