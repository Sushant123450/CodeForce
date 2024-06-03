#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        string Ans;
        for (int i = 0; i < n; n++)
        {
            for (int j = 0; j < k; j++)
            {
                Ans.push_back(('a' + j));
            }
        }
        cout << Ans << endl;
    }
}