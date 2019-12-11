#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Course {
public:
    string name;
    int charge;
    int duration;

    void SetCharge(int charge) {
        this->charge = charge;
    }

    int GetCharge() const {
        return charge;
    }

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }

    void SetDuration(int duration) {
        this->duration = duration;
    }

    int GetDuration() const {
        return duration;
    }

    Course() {
    }

};

class Student {
public:
    string name;
    Course course;
    int id;
};

int main(int argc, char** argv) {
    Student A;
    Course course;
    cout << "Enter student's name " << endl;
    string na;
    cin>>na;
    A.name = na;
    cout << "Enter student's ID" << endl;
    int ident;
    cin>>ident;
    A.id = ident;
    cout << "Pick your course " << endl;
    cout << "1. Mathematics " << endl;
    cout << "2. DBIT " << endl;
    cout << "3. Business Management " << endl;
    cout << "4. Finance " << endl;
    cout << "5. Accounting " << endl;
    int unit;
    cin>>unit;
    switch (unit) {
        case 1:
            course.SetName("Mathematics");
            course.SetCharge(50000);
            course.SetDuration(36);
            break;
        case 2:
            course.SetName("DBIT");
            course.SetCharge(62000);
            course.SetDuration(12);
            break;
        case 3:
            course.SetName("Business Management");
            course.SetCharge(59000);
            course.SetDuration(36);
            break;
        case 4:
            course.SetName("Finance");
            course.SetCharge(62000);
            course.SetDuration(48);
            break;
        case 5:
            course.SetName("Accounting");
            course.SetCharge(62000);
            course.SetDuration(24);
            break;
    }
    cout << "Congratulations " << A.name << " : " << A.id << "\n" <<
            " you have registered for the " << course.GetName() << " Unit. \n" <<
            " The fee is = " << course.GetCharge() << " per semester \n" <<
            "for a duration of " << course.GetDuration() << " months" << endl;
    return 0;
}