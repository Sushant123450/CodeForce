#include <bits/stdc++.h>
using namespace std;

int main()
{
    string Name_1;
    cin >> Name_1;
    string Name_2;
    cin >> Name_2;
    string Pile_1;
    cin >> Pile_1;
    string Pile_2 = Name_1 + Name_2;
    unordered_map <char,int> Pile1;
    unordered_map <char,int> Pile2;
    int flag=0;
    if(Pile_1.size()!=Pile_2.size()) cout << "NO";
    else
    {
        for (int i=0; i<Pile_1.size(); i++)
        {
            Pile1[Pile_1[i]]++;
            Pile2[Pile_2[i]]++;
        }
        for(auto &it : Pile1)
        {
            if(Pile2[it.first]!=it.second) flag=1;
        }

        if(flag) cout << "NO" ;
        else cout << "YES" ; 
    }
    
} 