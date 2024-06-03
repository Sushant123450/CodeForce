#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N , K;
    cin >> N >> K;
    if(N%2==1)
    {
        if(K>N/2+1)
        {
            cout << 2*(K-(N/2+1));
        }
        else
        {
            cout << 2*(K-1)+1;
        }

    }
    else
    {
       if(K>N/2)
        {
            cout << 2*(K-(N/2));
        }
        else
        {
            cout << 2*(K-1)+1;
        } 

    }
}
