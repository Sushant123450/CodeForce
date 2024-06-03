#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,T;
    cin >> N >> T;
    string S;
    cin >> S;
    for(int j=0; j<T; j++)
    {
        for(int i=0; i<N-1; i++)
        {
            if(S[i]=='B' && S[i+1]=='G')
            {
                swap(S[i],S[i+1]);
                i++;
            }
        }
    }
    cout << S << endl;
}