#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int Lucky_Number = 0;
    for (auto &it : S)
    {
        if (it == '7' || it == '4')
            Lucky_Number++;
    }
    if (Lucky_Number == 4 || Lucky_Number == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}