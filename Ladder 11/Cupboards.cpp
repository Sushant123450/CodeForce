#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int L_0=0, L_1=0;
    int R_0=0, R_1=0;
    for (int i = 0; i < N; i++)
    {
        int A,B;
        cin >> A >> B;
        if(A) L_1++;
        else L_0++;

        if(B) R_1++;
        else R_0++;
    }
    cout << min(L_0,L_1) + min(R_0,R_1) << endl;

    
}