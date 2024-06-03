#include <bits/stdc++.h>
using namespace std;
string tolower(string S)
{
    string Str = "";
    for (auto &it : S)
    {
        Str.push_back(tolower(it));
    }
    return Str;
}
int main()
{
    string Input_1;
    cin >> Input_1;
    string Input_2;
    cin >> Input_2;
    Input_1 = tolower(Input_1);
    Input_2 = tolower(Input_2);
    if (Input_1 > Input_2) cout << 1 ;
    else if(Input_1 < Input_2) cout << -1 ;
    else cout << 0 ;
}