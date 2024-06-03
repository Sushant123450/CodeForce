#include <bits/stdc++.h>
#define Switch(state) (state==1) ? 0 : 1
using namespace std;

int main()
{
    vector <vector <int>> Lights(3,vector <int>(3,1));
    vector <vector <int>> Toggle(3,vector <int>(3,0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int A;
            cin >> A; 
            if(A%2==1) Toggle[i][j]=1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(Toggle[i][j]==1)
            {
                Lights[i][j]=Switch(Lights[i][j]);
                if(i+1<3) Lights[i+1][j]=Switch(Lights[i+1][j]);
                if(j+1<3) Lights[i][j+1]=Switch(Lights[i][j+1]);
                if(i-1>-1) Lights[i-1][j]=Switch(Lights[i-1][j]);
                if(j-1>-1) Lights[i][j-1]=Switch(Lights[i][j-1]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Lights[i][j];
        }
        cout << endl;
    }

}