#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T, SX, SY, EX, EY;
    cin >> T >> SX >> SY >> EX >> EY;
    string Wind;
    cin >> Wind;
    char X, Y;
    if (EX > SX)
    {
        X = 'E';
    }
    else
    {
        X = 'W';
    }
    if (EY > SY)
    {
        Y = 'N';
    }
    else
    {
        Y = 'S';
    }
    long long int Steps=0;
    long long int Reached_flag=0;
    for (auto &it : Wind)
    {
        if (it == X)
        {
            if(SX!=EX)
            {
                if (X == 'E')
                {
                    SX++;
                }
                else
                {
                    SX--;
                }
            }
            
        }
        else
        {
            if (it == Y)
            {
                if(SY!=EY)
                {
                    if(Y == 'N')
                    {
                        SY++;
                    }
                    else
                    {
                        SY--;
                    }
                }
                
            }
        }
        Steps++;
        if(SX==EX && SY == EY)
        {
            Reached_flag=1;
            break;
        }
    }
    if(Reached_flag)
    {
        cout << Steps;
    }
    else
    {
        cout << -1;
    }
}