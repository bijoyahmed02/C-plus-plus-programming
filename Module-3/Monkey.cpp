#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int len = strlen(s);
        char let[100001];
        int j = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i] != ' ')
            {
                let[j++] = s[i];
            }
        }
        sort(let, let+j);

        for(int i = 0; i < j; i++)
        {
            cout << let[i];
        }
        cout << endl;
    }
    return 0;
}
