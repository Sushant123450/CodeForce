#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x=0;
    for(int i=0; i<N; i++)
    {
        string Op;
        cin >> Op;
        if(Op=="X++" || Op=="++X") x++;
        else x--;
    }
    cout << x ;
}