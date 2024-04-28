#include "AcademicStaff.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

AcademicStaff::AcademicStaff(const string& staff_id, const string& name,
                             const string& department)
        : staff_id(staff_id), name(name), department(department) {}

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