#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i]=='W' && S[i+1]=='U' && S[i+2]=='B')
        {
            i=i+2;
        }
        else
        {
            cout << S[i];
            if(S[i+1]=='W' && S[i+2]=='U' && S[i+3]=='B')
            {
                cout << " "; 
            }
        }
    }
}
