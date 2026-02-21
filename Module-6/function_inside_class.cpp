#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll; 
    int math; 
    int english;
    Student(string name,int roll,int math, int english)
    {
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }
        void total()
        {
            cout<<"Total mark of "<<name<<" = "<<math+english<<endl;
        }
};
int main()
{
    Student sakib("Sakib Sarker",23,85,92);
    sakib.total();
    Student Rakib("Rakib Sarker",25,90,92);
    Rakib.total();
   
    return 0;
}