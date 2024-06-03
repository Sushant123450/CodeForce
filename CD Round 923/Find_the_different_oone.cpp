#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> input(n);
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        int m;
        cin >> m;
        vector<pair<int, int>> lr(m);
        for (int j = 0; j < m; j++)
        {
            int left,right;
            cin >> left >> right;
            left--;
            right--;
            int l = -1, r = -1;
            while (left < right)
            {
                if (input[left] != input[right])
                {
                    l = left + 1;
                    r = right + 1;
                    break;
                }
                right--;
            }
            cout << l << " " << r << endl;
        }
        cout << endl;
    }
}