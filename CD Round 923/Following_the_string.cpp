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
        vector<int> input(n);
        unordered_map<int,vector<char>>map;
        int j=0;
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
            if(input[i]==0)
            {
                map[0].push_back('a'+j);
                j++;
            }
        }
        string Ans(n,' ');
        for(int i=0; i<n; i++)
        {
            char L_Char ;
            vector <char> vec= map[input[i]];
            L_Char = vec[vec.size()-1];
            map[input[i]].pop_back();
            map[input[i]+1].push_back(L_Char);
            Ans[i]=L_Char;
        }
        cout << Ans <<  endl;
        
    }
}
