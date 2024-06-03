#include <bits/stdc++.h>
using namespace std;
int main(){
    long long T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        int sum=0;
        for (long long i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum+=abs(temp);
        }
    
        cout << sum << endl;
    }
    return 0;
}