#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;

    long long int index;
    long long int Min = LLONG_MAX;
    vector<long long int> Distance(N);
    for (long long int i = 0; i < N; i++)
    {
        long long int A;
        cin >> A;
        Distance[i] = A;
        if (Min > A)
        {
            Min = A;
            index = i;
        }
    }
    int flag = 0;
    for (long long int i = 0; i < N; i++)
    {
        if ((i != index) && (Distance[i] == Min))
            flag = 1;
    }
    if (flag == 1)
        cout << "Still Rozdil";
    else
    {
        cout << index + 1;
    }
}
