#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string Hello = "";
    if (S == "hello")
    {
        cout << "YES";
    }
    else if (S.length() > 5)
    {
        for (auto &it : S)
        {
            if (it == 'h' || it == 'e' || it == 'l' || it == 'o')
                Hello.push_back(it);
        }
        int i = 0;
        int flag = 0;
        char Hell[5] = {'h', 'e', 'l', 'l', 'o'};
        for (auto &it : Hell)
        {
            while (i < Hello.length())
            {
                if (Hello[i] == it)
                {
                    flag++;
                    // cout << Hello[i] << ':' << it << ':' << i <<" ";
                    i++;
                    break;
                    
                }
                i++;
            }
        }
        if (flag == 5)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        cout << "NO";
    }
}
