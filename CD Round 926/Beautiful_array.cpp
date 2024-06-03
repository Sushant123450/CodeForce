#include <bits/stdc++.h>
using namespace std;
int main(){
    long long T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        vector<long long> input(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> input[i];    
        }
        sort(input.begin(), input.end());
        long long sum=0;
        for (long long i = 1; i < n; i++)
        {
            sum+=(-input[i-1]+input[i]);
        }
        cout << sum << endl;
    }
    return 0;
}