#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    priority_queue<int> Max_Cost;
    priority_queue<int, vector<int>, greater<int>> Min_Cost;
    for (int i = 0; i < M; i++)
    {
        int A;
        cin >> A;
        Max_Cost.push(A);
        Min_Cost.push(A);
    }
    int Profit = 0;
    int Loss = 0;
    for (int i = 0; i < N; i++)
    {
        Profit += Max_Cost.top();
        if (Max_Cost.top() - 1 > 0)
        {
            int Top = Max_Cost.top();
            Max_Cost.pop();
            Max_Cost.push(Top - 1);
        }

        Loss += Min_Cost.top();
        if (Min_Cost.top() - 1 > 0)
        {
            int Top = Min_Cost.top();
            Min_Cost.pop();
            Min_Cost.push(Top - 1);
        }
        else if (Min_Cost.top() == 1)
        {
            Min_Cost.pop();
        }
    }
    cout << Profit << " " << Loss ;
}