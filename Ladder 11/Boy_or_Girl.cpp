#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    set<char> Distinct_letters;
    for (auto &it : S)
    {
        Distinct_letters.insert(it);
    }
    if (Distinct_letters.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}