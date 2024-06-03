#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    int Number_of_Fingers = 0;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        Number_of_Fingers += A;
    }
    int count = 0;
    for (int i = 1; i < 6; i++)
    {
        if (((Number_of_Fingers + i-1) % (N+1)) != 0)
            {
                count++;
            }
        
    }
    cout << count ;
}