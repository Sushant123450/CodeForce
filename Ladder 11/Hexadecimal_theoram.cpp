#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N==0) cout << "0 0 0";
    else if(N==1) cout << "0 0 1";
    else if (N==2) cout << "0 1 1";
    else if(N>=3)
    {
        int A1=0;
        int A2=1;
        int A4=2;
        while(A1+A2+A4!=N)
        {
            A4=A4+A2+A1;
            int temp=A2;
            A2=A2+A1;
            A1=temp;
        }
        cout << A1 << " " << A2 << " " << A4;
    }

}