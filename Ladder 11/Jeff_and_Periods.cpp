#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_map<int, vector<int>> Seq;
    map<int, int> AP;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        Seq[A].push_back(i);
    }
    for (auto &it : Seq)
    {
        if (it.second.size() == 1)
            AP[it.first] = 0;

        else if (it.second.size() == 2)
        {
            AP[it.first] = it.second[1] - it.second[0];
        }
        else
        {
            int flag = 1;
            int D = it.second[1] - it.second[0];
            int A = it.second[0];
            for (int i = 1; i < it.second.size(); i++)
            {
                if (A + D == it.second[i])
                {
                    A=A+D;
                }
                else
                {
                    flag=0;
                }
            }
            if (flag)
            {
                AP[it.first] = D;
            }
            
        }
    }
    cout << AP.size() << endl;
    for(auto &it : AP)
    {
        cout << it.first << " " << it.second << endl;
    }
}

/*
1
2
*/

/*
8
1 2 1 3 1 2 1 5
*/