#include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long T;
//     cin >> T;
//     while (T--)
//     {
//         long long a, b, l;
//         cin >> a >> b >> l;
//         vector<int> factor;
//         for (int i = 1; i <= l; i++)
//         {
//             if (l % i == 0)
//                 factor.push_back(i);
//         }
//         int k_val = 0;
//         int log_a = 0;
//         int log_b = 0;
//         int temp = l;
//         while (temp % a == 0)
//         {
//             log_a++;
//             temp = temp / a;
//         }
//         temp = l;
//         while (temp % b == 0)
//         {
//             log_b++;
//             temp = temp / b;
//         }
//         cout << log_a << " " << log_b << endl;
//         if (a == b)
//         {
//             cout << log_a + 1 << endl;
//         }
//         else
//         {
//             // float log_a = log(float(l)) / log(a);
//             // float log_b = log(float(l)) / log(b);
//             for (int i = 0; i <= log_a; i++)
//             {
//                 for (int j = 0; j <= log_b; j++)
//                 {
//                     long long pow_a = pow(a, i);
//                     long long pow_b = pow(b, i);
//                     if (l % (pow_a * pow_b) == 0)
//                     {
//                         k_val++;
//                     }
//                 }
//             }
//             cout << k_val << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <cmath>
#include <set>

using namespace std;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int loop_val_a = log(n) / log(a);
    int loop_val_b = log(n) / log(b);
    set<int> s;
    for (int i = 0; i <= loop_val_a; i++)
    {
        for (int j = 0; j <= loop_val_b; j++)
        {
            long long a_new = pow(a, i);
            long long b_new = pow(b, j);
            long long prod = a_new * b_new;
            if ((prod <= n) && ((n % prod )== 0))
            {
                s.insert(prod);
            }
        }
    }
    // cout << loop_val_a << " " << loop_val_b ;
    cout << s.size() << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}