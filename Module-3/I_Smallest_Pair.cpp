#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin>>N;
        long long A[N];
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
        long long ans;
        long long result=LLONG_MAX;
        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                ans=A[i]+A[j]+j-i;
                result=min(ans,result);
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}