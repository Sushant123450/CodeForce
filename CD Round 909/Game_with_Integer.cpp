#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        if(N%3==0)
        cout << "Second";
        else
        cout << "First";
    }
}