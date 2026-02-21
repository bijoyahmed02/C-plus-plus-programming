#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int sum;  
};
bool cmp(Student l, Student r)
{
    if (l.sum != r.sum)
    {
       return l.sum > r.sum; 
    }
    else
    {
      return l.id < r.id;  
    }
}
int main()
{
    int N;
    cin >> N;
    Student a[N];
    for (int i = 0; i < N; i++)
    {
      cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
      a[i].sum = a[i].math_marks + a[i].eng_marks; 
    }
    sort(a, a + N, cmp);
    for (int i = 0; i < N; i++)
    {
      cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " "<< a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
