#include <bits/stdc++.h>
using namespace std;

int Dangerous(string Str)
{
    for (int i = 0; i< Str.length(); i++)
    {
        if(Str.length()<=7 || i+7>Str.length())
            return 0;

        else
        {
            if((Str[i]=='1' && Str[i+1]=='1'  && Str[i+2]=='1'  && Str[i+3]=='1' && Str[i+4]=='1' && Str[i+5]=='1' && Str[i+6]=='1') || (Str[i]=='0' && Str[i+1]=='0'  && Str[i+2]=='0'  && Str[i+3]=='0' && Str[i+4]=='0' && Str[i+5]=='0' && Str[i+6]=='0'))
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    string N;
    cin >> N;
    if(Dangerous(N)) cout << "YES";
    else cout << "NO" ;
}
