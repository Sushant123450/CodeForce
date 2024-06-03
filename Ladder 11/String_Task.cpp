#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    cin >> N;
    vector<char> Letter;
    for (auto &it : N)
    {
        if (it == 'A' || it == 'O' || it == 'Y' || it == 'E' || it == 'U' || it == 'I' || it == 'a' || it == 'o' || it == 'y' || it == 'e' || it == 'u' || it == 'i')
            continue;
        else
        {
            if (it < 'a')
            {
                Letter.push_back((it - 'A' + 'a'));
            }
            else
            {
                Letter.push_back(it);
            }
        }
    }
    for(auto &it : Letter)
    {
        cout << "." << it;
    }
}
