#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <vector <int>>Matrix{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int x,y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int A;
            cin >> A;
            if(A)
            {
                Matrix[i][j]=1;
                x=i;
                y=j;
            }
        }
    }
    cout << abs(x - 2)+abs(y - 2) << endl;
}