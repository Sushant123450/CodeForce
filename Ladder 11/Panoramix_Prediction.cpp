#include <bits/stdc++.h>
using namespace std;
int B_search(int A[], int N)
{
    int l = 0;
    int h = 16;
    int mid = (l + h) / 2;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (A[mid] == N)
            return mid;
        else if (A[mid] > N)
            h = mid;
        else
            l = mid;
    }
}
int main()
{
    int A[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int N, M;
    cin >> N >> M;
    if(M==A[B_search(A,N)+1]) cout << "YES" << endl;
    else cout << "NO" << endl;

}