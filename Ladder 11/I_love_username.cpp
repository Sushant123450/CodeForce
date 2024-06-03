#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int Best=A[0];
    int Worst=A[0];
    int Amazing=0;
    for(int i=1; i<N; i++)
    {
        if(A[i]>Best)
        {
            Amazing++;
            Best=A[i];
        }
        else if(A[i]<Worst)
        {
            Amazing++;
            Worst=A[i];
        }
    }
    cout << Amazing << endl;
    delete [] A;
}
