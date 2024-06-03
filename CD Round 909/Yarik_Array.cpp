#include <bits/stdc++.h>
using namespace std;
int check(int Number)
{
    return abs(Number) % 2;
}
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> Arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> Arr[i];
        }

        int Max = INT_MIN;
        -+  
        for (int i = 0; i < n; i++)
        {
            int j = i;
            int sum = 0;
            while (j < n)
            {
                sum += Arr[j];
                Max = max(sum, Max);
                if ((j + 1 < n) and (check(Arr[j]) == check(Arr[j + 1])))
                {
                    i=j;
                    break;
                }
                j++;
            }
        }
        cout << Max << endl;
    }
}
