#ifndef PROGRAMMIG_PROJECT_ACADEMICSTAFF_H
#define PROGRAMMIG_PROJECT_ACADEMICSTAFF_H
#include <vector>
#include <iostream>
#include "User.h"
#include "Course.h"

using namespace std;

class AcademicStaff: public User{
protected:
    string staff_id;
    string name;
    string department;
    vector<string> courses_taught;
    string OfficeHours;

public:
    AcademicStaff(string staff_id, const string& name, const string& department);
    AcademicStaff();
    void getCoursesTaught() const;
    string getStaffID() const;
    string getName() const;
    string getDepartment() const;

    // Methods
    void teachCourse(vector<Course>& c);
    void gradeAssignment();
    void viewStudentList(const vector<int>& studentList);
    void scheduleOfficeHours(const string& officeHours);
    vector<string> coursesTaught();


};


#endif
