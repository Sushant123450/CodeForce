#include <bits/stdc++.h>
using namespace std;

int answer(vector<int> A, int N, int k)
{
   int Answer = 0;
   for (int i = 1; i <= N; i++)
   {
      if (A[i] <= 0 || A[i] < A[k])
      {
         
         // cout << A[i] << " " << A[k];
         return Answer;
      }
      else if (A[i] >= A[k])
      {
         Answer++;
      }
      // cout << A[i] << " " << Answer << endl;
   }
   return Answer;
}
int main()
{
   int N, K;
   cin >> N >> K;
   vector<int> Arr(N+1);
   for (int i = 1; i <= N; i++)
   {
      cin >> Arr[i];
   }
   cout << answer(Arr, N, K);
}