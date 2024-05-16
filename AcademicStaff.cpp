#include "AcademicStaff.h"
#include "User.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

AcademicStaff::AcademicStaff() {
    cout << "Enter Staff Name: " <<endl;
    getline(cin,name);
    cout<< "Enter staff ID: " <<endl;
    getline(cin,staff_id);
    cout<< "Enter Staff Department: " <<endl;
    getline(cin,department);

}
AcademicStaff::AcademicStaff(string id, const string& n, const string& d){             //n= name , d = department
    name = n;
    staff_id = id;
    department = d;
}

void AcademicStaff::addCourseTaught(const string& course) {
    courses_taught.push_back(course);
}
vector<string> AcademicStaff::getCoursesTaught() const {
    return courses_taught;
}

string AcademicStaff::getStaffID() const {
    return staff_id;
}

string AcademicStaff::getName() const {
    return name;
}

string AcademicStaff::getDepartment() const {
    return department;
}

void AcademicStaff::teachCourse(const string& course) {
    courses_taught.push_back(course);
}

void AcademicStaff::gradeAssignment() {
    string assignmentName = "";
    cout << "Enter the assignment name: ";
    cin >> assignmentName;
    cout << "Grading assignment: " << assignmentName << endl;
    map<string, int> studentGrades;

    int numStudents;

    do {
        cout << "Enter the number of students : ";
        cin >> numStudents;
    } while (numStudents <= 0);

    for (int i = 0; i < numStudents; ++i) {
        string studentID;
        int grade;

        cout << "Enter student ID for student " << (i + 1) << ": ";
        cin >> studentID;

        do {
            cout << "Enter grade for " << studentID<< " :"<<endl;
            cin >> grade;
        } while (grade < 0 || grade > 100);

        studentGrades[studentID] = grade;
    }

    cout << "\nStudent Grades:" <<endl;
    for (const auto& [studentID, grade] : studentGrades) {
        cout << " - Student ID: " << studentID << ", Grade: " << grade << endl;
    }
}


void AcademicStaff::viewStudentList(const vector<string>& studentList) {
    if (studentList.empty()) {
        cout << "No students enrolled in courses taught by " << name << "." << endl;
    } else {
        cout << "Students enrolled in courses taught by " << name << ":" << endl;
        for (const string& student : studentList) {
            cout << "- " << student << endl;
        }
    }
}


void AcademicStaff::scheduleOfficeHours(const string& officeHours) {
    OfficeHours = officeHours;
}