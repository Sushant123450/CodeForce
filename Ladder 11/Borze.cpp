#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >>S;
    string Ans="";
    for(int i=0; i<S.size(); i++ )
    {
        if(S[i]=='.') Ans.push_back('0');
        else
        {
            if(S[i+1]=='.') Ans.push_back('1');
            else Ans.push_back('2');
            i++;
        }
    }
    cout << Ans << endl;
}