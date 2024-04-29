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
    string name;
    string department;
    string id;
    int cHours; //credit hours
    vector<string> enrolledStudents;
public:
    Course();
    string getCourseID();
    void updateCredits();
    void viewCourseDetails();
    void listEnrolledStu();
    void enrollStudent(const string&);
};



#endif //COURSE_H
