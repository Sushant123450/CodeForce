#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count=0;
    for(int i=0; i<N-1; i++)
    {
        if(S[i]==S[i+1]) count++;
    }
    cout << count << endl;
}