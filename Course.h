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
    vector<string> materials;
public:
    Course();
    void addCourseMaterial();
    void updateCredits();
    void viewCourseDetails();
    void listEnrolledStu();
};



#endif //COURSE_H
