#include <bits/stdc++.h>
using namespace std;

int main()
{
    float lb, bh, lh;
    cin >> lb >> bh >> lh;
    float l = pow((lb * bh * lh),0.5) / bh;
    float b = pow((lb * bh * lh),0.5) / lh;
    float h = pow((lb * bh * lh),0.5) / lb;
    cout << 4*(l + b + h);
}
