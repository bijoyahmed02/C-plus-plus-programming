#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mn=INT_MAX,mn_inx;
    int mx=INT_MIN,mx_inx;
    for(int i=0; i<n; i++)
    {
        mn=min(a[i],mn);
        mx=max(a[i],mx);
        if(a[i]==mn)
        {
            mn_inx=i;
        }
        if(a[i]==mx)
        {
            mx_inx=i;
        }
    }
    swap(a[mn_inx],a[mx_inx]);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}