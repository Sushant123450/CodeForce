#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, M;
    cin >> N >> M;
    long long int Current_pos=1;
    long long int Steps=0;
    for(long long int i = 0; i<M; i++)
    {
        long long int A;
        cin >> A;
        if(A>=Current_pos) 
        {
            Steps+=(A-Current_pos);
            Current_pos=A;
        }
        else 
        {
            Steps+=((N-Current_pos)+A);
            Current_pos=A;
        }
    }
    cout << Steps;
}