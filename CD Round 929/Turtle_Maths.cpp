#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        vector<int> input(n);
        unordered_map<int, vector<int>> umap;
        int sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> input[i];
            sum += input[i];
            if ((input[i] % 3))
            {
                umap[input[i] % 3].push_back(i);
            }
        }

        if (sum % 3 == 2)
            cout << 1 << endl;
        else if (sum % 3 == 0)
            cout << 0 << endl;
        else
        {
            if (umap[1].empty())
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}