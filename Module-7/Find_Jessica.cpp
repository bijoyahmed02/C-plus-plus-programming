#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin,S);
    stringstream ss(S);
    string word;
    bool fnd=false;
    while (ss>>word)
    {
        if(word=="Jessica")
        {
            fnd=true;
            break;
        }
    }
    if(fnd==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}