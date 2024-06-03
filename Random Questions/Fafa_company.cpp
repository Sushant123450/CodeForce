#include<iostream>

using namespace std;

int main()
{
    int Emp;
    cin >> Emp;
    int count = 0;
    for (int i = 1; i <= Emp / 2; i++)
    {
        if ((Emp - i) % i == 0)
        {
            count++;
        }
    }
    cout << count;
}