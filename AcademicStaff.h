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
public:AcademicStaff(const string& staff_id, const string& name, const string& department);
    void addCourseTaught(const string& course);
    vector<string> getCoursesTaught() const;
    string getStaffID() const;
    string getName() const;
    string getDepartment() const;



};


#endif
