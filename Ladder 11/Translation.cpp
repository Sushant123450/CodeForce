#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S1,S2;
    cin >> S1;
    cin >> S2;
    reverse(S1.begin(),S1.end());
    if(S1==S2)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    
}