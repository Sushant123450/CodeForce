#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Y;
    cin >> Y;
    set <int> Set;
    while(Set.size()!= 4)
    {
        Set.clear();
        ++Y;
        string Year=to_string(Y);
        Set.insert(Year[0]);
        Set.insert(Year[1]);
        Set.insert(Year[2]);
        Set.insert(Year[3]);
        
    }
    cout << Y << endl;
}