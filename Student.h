//
// Created by Ahmed Essam on 4/29/2024.
//

#ifndef STUDENT_H
#define STUDENT_H
#include "User.h"
#include <vector>
#include <map>

#include "Course.h"


// Student:
// Attributes:
// StudentID: Unique identifier for the student.
// Name: Name of the student.
// CoursesEnrolled: List of courses the student is enrolled in.
// Grades: Dictionary storing grades for each course.
// Methods:
// enrollCourse(): Enrolls the student in a course.
// viewTranscript(): Displays the student's academic transcript.
// calculateGPA(): Calculates the student's GPA based on grades.
// updateGrade(): Updates the grade for a specific course.


class Student: public User {
protected:
    int studentID;
    string name;
    vector<string> coursesEnrolled;
    map<string, float> grades;

public:
    Student(Course[], int);
    void enrollCourse(Course[], int, int);
    void viewTranscript();
    float calculateGPA();
    void updateGrade();
};



#endif //STUDENT_H
