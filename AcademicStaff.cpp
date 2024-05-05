#include "AcademicStaff.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

AcademicStaff::AcademicStaff()
{
//    get el hagat hena
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

void AcademicStaff::gradeAssignment(const string& studentName, double assignmentScore) {

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