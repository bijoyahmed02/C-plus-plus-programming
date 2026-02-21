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
    int count=0;
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        mn=min(a[i],mn);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==mn)
        {
            count++;
        }
    }
    if(count%2==1)
    {
        cout<<"Lucky";
    }
    else{
        cout<<"Unlucky";
    }
    return 0;
}