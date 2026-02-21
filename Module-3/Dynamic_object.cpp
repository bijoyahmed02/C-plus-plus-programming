#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    Student a(45,8,4.55);
   Student* b =new Student(33,8,3.55);
    
    cout<<a.roll<<" "<<a.cls<<" "<<a.gpa<<endl;
    cout<<b->roll<<" "<<b->cls<<" "<<b->gpa<<endl;

    
    return 0;
}