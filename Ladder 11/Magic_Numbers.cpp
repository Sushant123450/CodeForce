#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    long long int N=S.length();
    long long int i=0;
    for(; i<N; i++)
    {
        if((N-i-1>=2) && S[i]=='1' && S[i+1]=='4' && S[i+2]== '4')
        {
            i=i+2;
        }
        else if((N-i-1>=1) && S[i]=='1' && S[i+1]=='4')
        {
            i=i+1;
        }
        else if((N-i-1>=0) && S[i]=='1')
        {
            i=i;
        }
        else
        {
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES";
    
}