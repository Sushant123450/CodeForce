#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Input_1;
    cin >> Input_1;
    string Input_2;
    cin >> Input_2;
    string Output="";
    for (int i = 0; i < Input_1.size(); i++)
    {
        if( (int)Input_1[i] ^ (int)Input_2[i] ) Output.push_back('1');
        else Output.push_back('0');
    }
    cout << Output << endl;
}