#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    stringstream name(s);
    string word;
    int count=0;
    while (name>>word)
    {
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
    return 0;
}