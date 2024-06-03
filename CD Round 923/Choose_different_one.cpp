#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int n,m,A,B,k;
        int repeat = 0;
        cin >> n >> m >> k;
        A = B = k/2;
        vector<int>Frq_A(k);
        vector<int>Frq_B(k);
        vector<int>a(n);
        vector<int>b(m);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] <= k) Frq_A[a[i]-1]++;
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            if(b[i] <= k) Frq_B[b[i]-1]++;
        }


        for(int i = 0; i < k; i++)
        {
            if(Frq_B[i] && !Frq_A[i] && B)
            {
                B--;
            }
            else if(!Frq_B[i] && Frq_A[i] && A)
            {
                A--;
            }
            else if(Frq_B[i] && Frq_A[i])
            {
                repeat++;
            }
        }
        if(A+B-repeat == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}