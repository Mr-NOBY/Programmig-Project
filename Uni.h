//
// Created by Ahmed Essam on 4/27/2024.
//

#ifndef UNI_H
#define UNI_H
#include<string>
#include<iostream>
#include<vector>
using namespace std;


class Uni {
protected:
    string name;
    string location;
    int noColleges = 0;
    int noDepartments = 0;
    vector<string> colleges;
    vector<string> departments;

public:
    Uni();
    ~Uni();
    void addCollege();
    void addDepartment();
    vector<string> getColleges();
    vector<string> getDeparments();
};



#endif //UNI_H
