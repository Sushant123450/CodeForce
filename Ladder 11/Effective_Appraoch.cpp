#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    unordered_map <long long int,long long int> Index;
    for(long long int i=0; i<N; i++)
    {
        long long int A;
        cin >> A;
        Index[A]=i+1;
    }
    long long int N_Q;
    cin >> N_Q;
    long long int *A= new long long int [N_Q] ;
    for(long long int i=0; i<N_Q; i++)
    {
        cin >> A[i];
    }
    long long int Vasya=0;
    long long int Petya=0;
    for(long long int i=0; i<N_Q; i++)
    {
        Vasya+=Index[A[i]];
        Petya+=(N-Index[A[i]]+1);
    }
    cout << Vasya << " " << Petya;
    delete [] A;
}