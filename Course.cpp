//
// Created by Ahmed Essam on 4/28/2024.
//

#include "Course.h"

#include <iostream>


Course::Course() {
    cout << "\nPlease enter course Name: ";
    getline(cin, name);
    cout << "\nDepartment of Course: ";
    getline(cin, department);
    cout << "\nCouse ID";
    getline(cin, id);
    cout << "\nCredit Hours: ";
    cin >> cHours;
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
    cout << "\nNo. of Students Enrolled: "<< enrolledStudents.size();
}

void Course::listEnrolledStu() {
    cout << "\nEnrolled Students: \n";
    for (int i=0; i < enrolledStudents.size(); i++) {
        cout << enrolledStudents[i] << endl;
    }
}

void Course::addCourseMaterial() {
    string material;
    cout << "Please enter material: ";
    getline(cin, material);
    materials.push_back(material);
    cout << materials[materials.size()-1] << " was added successfully";
}



