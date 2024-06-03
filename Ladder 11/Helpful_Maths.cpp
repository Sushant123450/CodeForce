#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    if(S.size()==1) cout << S << endl;
    else
    {
        S.erase(remove(S.begin(),S.end(),'+'),S.end());
        sort(S.begin(),S.end());
        for(int i=0; i<S.size(); i++)
        {
            if(i==(S.size()-1)) cout << S[i];
            else
            {
                cout << S[i] <<'+';
            }
        }
    }
    
}
