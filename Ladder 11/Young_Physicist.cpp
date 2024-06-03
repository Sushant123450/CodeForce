#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> Vector(N, vector<int>(3));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Vector[i][j];
        }
    }
    int X=0, Y=0,Z=0;
    for (int i = 0; i < N; i++)
    {
        X+=Vector[i][0];
        Y+=Vector[i][1];
        Z+=Vector[i][2];
    }
    float Vector_Sum = pow((X*X+Y*Y+Z*Z), 0.5);
    if (Vector_Sum==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}


//Optimized Code


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     int X=0, Y=0, Z=0;
//     int temp;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> temp;
//             if (j==0) X+=temp;
//             else if (j==1) Y+=temp;
//             else Z+=temp;
//         }
//     }
//     int Vector_Sum = pow((X*X+Y*Y+Z*Z), 0.5);
//     if (Vector_Sum==0)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }

