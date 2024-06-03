#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    int M;
    cin >> M;
    int B[M];
    for(int i=0; i<M; i++)
    {
        cin >> B[i];
    }
    int Max=INT_MIN;
    int Count=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(B[j]%A[i]==0)
            {
                if(Max<(B[j]/A[i]))
                {
                    Max=B[j]/A[i];
                    Count=1;
                }
                else if (Max==(B[j]/A[i]))
                {
                    Count++;
                }
            }
        }
    }
    cout << Count ;
}
