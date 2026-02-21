#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int N;
        int S;
        cin>>N>>S;
        int A[N];
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
        bool ans=true;
        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                for(int k=j+1; k<N; k++)
                {
                if(A[i]+A[j]+A[k]==S)
                {
                    ans=false;
                    break;
                }
                }
                if(ans==false)
                {
                break;
                }
            }
            if(ans==false)
            {
                break;
            }
        }
        if(ans==false)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}