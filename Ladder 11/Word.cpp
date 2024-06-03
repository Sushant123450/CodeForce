#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int lower=0;
    int upper=0;
    for(auto &it : S)
    {
        if(it>='a' && it<='z') lower++;
        else upper++;
    }
    string Ans="";
    if(lower>=upper)
    {
        for(auto &it : S)
        {
            Ans.push_back(tolower(it));
        }
    }
    else
    {
        for(auto &it : S)
        {
            Ans.push_back(toupper(it));
        }
    }
    cout << Ans << endl;
}