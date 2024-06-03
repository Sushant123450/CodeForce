#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count_5=0;
    int count_0=0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        if(A==5) count_5++;
        else count_0++;
    }
    string Ans="";
    if((count_5/9)>=1 && count_0>=1)
    {
        for(int j=0; j<9*(count_5/9); j++) Ans.push_back('5');
        for(int j=0; j<count_0; j++) Ans.push_back('0');
        cout << Ans;
    }
    else if(count_0>=1) cout << 0;
    else cout << -1 ;
}