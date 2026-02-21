#include<bits/stdc++.h>
using namespace std;
int* p;
void fun()
{
    int* s=new int;
    *s=10;
    p=s;
    cout<<"Fun-->"<<*p<<endl;
}
int main()
{
    fun();
    cout<<"Main-->"<<*p<<endl;
}