//
// Created by Ahmed Essam on 5/2/2024.
//

#ifndef FILE_H
#define FILE_H
#include <memory>
#include<variant>
#include "Course.h"
#include "Student.h"


class File {
public:
    vector<string> readData();
    void writeData(string);
    string formatData(vector<Course>, int);
    string formatData(Student*, int);
    variant<vector<Course>, vector<Student>> parseData(vector<string>);
};



#endif //FILE_H
