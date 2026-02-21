#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    int id;
    string name;
    char section;
    double marks;
};

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T;i++) {
        Student students[3];
        for (int i = 0; i < 3; i++) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].marks;
        }

        Student highest = students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].marks > highest.marks) {
                highest = students[i];
            } else if (students[i].marks == highest.marks && students[i].id < highest.id) {
                highest = students[i];
            }
        }

        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.marks << endl;
    }
    return 0;
}
