#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N<5) 
    {
        cout << 0;
        return 0;
    }
    vector<pair<int, int>> Points(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Points[i].first >> Points[i].second;
    }
    int Count = 0;
    for (int i = 0; i < N; i++)
    {
        int Up = 0, Down = 0, Left = 0, Right = 0;
        for (int j = 0; j < N; j++)
        {
            if (i != j)
            {
                if ((Points[i].first < Points[j].first) && (Points[i].second == Points[j].second))
                    Right++;
                if ((Points[i].first > Points[j].first) && (Points[i].second == Points[j].second))
                    Left++;
                if ((Points[i].first == Points[j].first) && (Points[i].second > Points[j].second))
                    Down++;
                if ((Points[i].first == Points[j].first) && (Points[i].second < Points[j].second))
                    Up++;
            }
        }
        if(Right>0 && Left>0 && Up>0 && Down>0)
            {
                Count++;
            }  
    }
    cout << Count;

}
