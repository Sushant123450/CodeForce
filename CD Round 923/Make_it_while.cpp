#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        string input;
        cin >> input;
        int i = 0, j = input.length() - 1;
        int first_b = INT_MAX, last_b = INT_MIN;
        int flag1 = 0, flag2 = 0;
        while (i < n)
        {
            if (input[i] == 'B')
            {
                first_b = i;
                break;
            }
            i++;
        }
        while(j>=0)
        {
            if(input[j]=='B')
            {
                last_b=j;
                break;
            }
            j--;
        }
        cout << (j - i + 1) << endl;
    }
}