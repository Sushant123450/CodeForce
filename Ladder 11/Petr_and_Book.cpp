#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Pages;
    cin >> Pages;
    int *Days = new int[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> Days[i];
    }
    int Sum = 0;
    int i = 0;
    do
    {
        Sum += Days[i % 7];
        if (Sum < Pages)
            i++;
    } while (Sum < Pages);
    cout << i % 7 + 1;
}
