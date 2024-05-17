#include "AcademicStaff.h"
#include "User.h"
#include "Course.h"
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
AcademicStaff::AcademicStaff(string id, const string& n, const string& d){            //n= name , d = department
    name = n;
    staff_id = id;
    department = d;
}

void AcademicStaff::getCoursesTaught() const {
    for (const auto& course : courses_taught) {
        cout << course << endl;
    }
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

void AcademicStaff::teachCourse(vector<Course>& c) {
    string courseID;
    while (true) {
        cout << "Enter a course ID to be taught : " <<endl;
        getline(cin,courseID);

        for (int i = 0; i < c.size(); i++) {
            if (courseID == c[i].getCourseID()) {
                courses_taught.push_back(courseID);
                return;
            }
        }
        cout << "Incorrect course ID. Please try again." << endl;
    }
}

void AcademicStaff::gradeAssignment() {
    string assignmentName = "";
    int numStudents;

    cout << "Enter the assignment name: ";
    getline(cin,assignmentName);
    cout << "Grading assignment: " << assignmentName << endl;
    map<string, int> studentGrades;

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


void AcademicStaff::viewStudentList(const vector<int>& studentList) {
    if (studentList.empty()) {
        cout << "No students enrolled in courses taught by " << name << "." << endl;
    } else {
        cout << "Students enrolled in courses taught by " << name << ":" << endl;
        for (const int& student : studentList) {
            cout << "- " << student << endl;
        }
    }
}


void AcademicStaff::scheduleOfficeHours(const string& officeHours) {
    OfficeHours = officeHours;
}

vector<string> AcademicStaff::coursesTaught() {
    return courses_taught;
}
