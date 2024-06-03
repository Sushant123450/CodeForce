#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    // vector <int> Wants;
    int Max=INT_MIN;
    int Index=0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A ;
        if(ceil(A/(float)M)>=Max)
        {
            Max=ceil(A/(float)M);
            Index=i+1;
        }

    }
    cout << Index;
    
}
