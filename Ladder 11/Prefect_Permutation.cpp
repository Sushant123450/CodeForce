#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N % 2 == 1)
        cout << -1 << endl;
    else
    {
        vector <int> A;
        for(int i=1; i<N; i=i+2)
        {
            A.push_back(i+1);
            A.push_back(i);
        }
        for (int i = 0; i < N; i++)
        {
            cout << A[i] << " ";
        }
        
    }
}