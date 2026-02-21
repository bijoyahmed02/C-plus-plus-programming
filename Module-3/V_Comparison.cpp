#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    char S;
    cin>>A>>S>>B;
    bool ans=false;
    if(A>B)
    {
        if(S=='>')
        {
            ans=true;
        }
    }
    else if(A<B)
    {
       if(S=='<')
        {
            ans=true;
        } 
    }
    else if(A==B)
    {
       if(S=='=')
        {
            ans=true;
        } 
    }
    else{
        ans=false;
    }
    if(ans==true)
    {
        cout<<"Right";
    }
    else{
        cout<<"Wrong";
    }
    return 0;
}