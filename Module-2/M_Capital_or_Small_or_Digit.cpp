#include<bits/stdc++.h>
using namespace std;
int main()
{
    char X;
    cin>>X;
    if(X>='0' && X<='9')
    {
        cout<<"IS DIGIT\n";
    }
    else{
        cout<<"ALPHA\n";
        if(X>='A' && X<='Z')
        {
          cout<<"IS CAPITAL";
        }
        else if(X>='a' && X<='z')
        {
            cout<<"IS SMALL";
        }
    }

    return 0;
}