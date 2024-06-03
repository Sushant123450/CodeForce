#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count=0;
    for(int i=0; i<N; i++)
    {
        int Sum=0;
        for (int j = 0; j < 3; j++)
        {
            int A;
            cin >> A;
            Sum+=A;
        }
        if(Sum>=2) count++;
    }
    cout << count << endl;
}