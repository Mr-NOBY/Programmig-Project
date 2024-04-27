//
// Created by Ahmed Essam on 4/27/2024.
//

#include "Uni.h"
#include <iostream>
#include <string>
using namespace std;

Uni::Uni()
{
    noColleges = 0;
    noDepartments = 0;
    string n; //Name of Uni
    string add; //Address of Uni
    cout << "\nPlease enter the name of Uni: ";
    getline(cin, n);
    cout << "\nPlease enter the location of Uni: ";
    getline(cin, add);
    name = n;
    location = add;
}

Uni::~Uni()
{
}

void Uni::addCollege() {
    string college;
    cout << "\nPlease enter the name of the college: ";
    getline(cin, college);
    colleges.push_back(college);
    cout << colleges[colleges.size()-1]<< " has been added!";
}

void Uni::addDepartment() {
    string department;
    cout << "\nPlease enter the name of the department: ";
    getline(cin, department);
    departments.push_back(department);
    cout << departments[departments.size()-1] << " has been added";
}

vector<string> Uni::getColleges() {
    return colleges;
}

vector<string> Uni::getDeparments() {
    return departments;
}

