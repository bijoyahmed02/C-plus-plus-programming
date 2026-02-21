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
Student fun()
{
   Student a(45,8,4.55);
   return a; 
}
int main()
{
    Student obj=fun();
    
    cout<<obj.roll<<" "<<obj.cls<<" "<<obj.gpa<<endl;
    
    return 0;
}