#ifndef PROGRAMMIG_PROJECT_ACADEMICSTAFF_H
#define PROGRAMMIG_PROJECT_ACADEMICSTAFF_H
#include <vector>
#include <iostream>
#include "User.h"

using namespace std;

class AcademicStaff :public User {
protected:
    string staff_id;
    string name;
    string department;
    vector<string> courses_taught;
    string OfficeHours;

public:AcademicStaff();
    void addCourseTaught(const string& course);
    vector<string> getCoursesTaught() const;
    string getStaffID() const;
    string getName() const;
    string getDepartment() const;

    // Methods
    void teachCourse(const string& course);
    void gradeAssignment(const string& studentName, double assignmentScore);
    void viewStudentList(const vector<string>& studentList);
    void scheduleOfficeHours(const string& officeHours);


};


#endif
