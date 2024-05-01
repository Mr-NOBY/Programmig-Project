//
// Created by Ahmed Essam on 4/28/2024.
//

#include "Course.h"

#include <iostream>

vector<string> Course::coursesList;

Course::Course() {
    cout << "\nPlease enter course Name: ";
    getline(cin, name);
    cout << "Department of Course: ";
    getline(cin, department);
    cout << "Course ID: ";
    getline(cin, id);
    cout << "Credit Hours: ";
    cin >> cHours;
    cin.ignore();
    coursesList.push_back(id);
}

void Course::updateCredits() {
    cout << "\nEnter the new course Credit Hours: ";
    cin >>cHours;
}

void Course::viewCourseDetails() {
    cout << "\nCourse Name: " << name;
    cout << "\nCourse ID: " << id;
    cout << "\nDepartment: " <<department;
    cout << "\nCredit Hours: " <<cHours;
    cout << "\nNo. of Students Enrolled: "<< enrolledStudents.size() <<endl;
}

void Course::listEnrolledStu() {
    cout << "\nEnrolled Students: \n";
    for (int i=0; i < enrolledStudents.size(); i++) {
        cout << enrolledStudents[i] << endl;
    }
}

void Course::enrollStudent(const int& stID) {
    enrolledStudents.push_back(stID); //not working
}

string Course::getCourseID() {
    return id;
}






