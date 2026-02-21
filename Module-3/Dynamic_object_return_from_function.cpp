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
Student* fun()
{
   Student*  a= new Student(45,8,4.55);
   
   return a; 
}
int main()
{
    Student* p=fun();
    
    cout<<p->roll<<" "<<p->cls<<" "<<p->gpa<<endl;
    
    return 0;
}