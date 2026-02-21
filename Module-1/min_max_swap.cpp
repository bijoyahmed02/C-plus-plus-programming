#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<min(x,y)<<endl;
    cout<<max({10,20,30,40,50})<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    
   return 0;
}