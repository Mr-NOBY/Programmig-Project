//
// Created by Ahmed Essam on 4/28/2024.
//

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
using namespace std;

class Course {
protected:
    static vector<string> coursesList;
    string name;
    string department;
    string id;
    int cHours; //credit hours
    vector<int> enrolledStudents;
public:
    Course();
    Course(string, string, string, int);
    string getCourseID();
    string getCourseName();
    string getCourseDepartment();
    int getCredHours();
    int getNoEnrolled();
    void updateCredits();
    void viewCourseDetails();
    void listEnrolledStu();
    void enrollStudent(const int&);
};



#endif //COURSE_H
