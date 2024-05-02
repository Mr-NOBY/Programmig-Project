//
// Created by Ahmed Essam on 5/2/2024.
//

#ifndef FILE_H
#define FILE_H
#include <memory>

#include "Course.h"
#include "Student.h"


class File {
public:
    void readData();
    void writeData(string);
    void parseData();
    string formatData(Course*, int);
    string formatData(Student*, int);
};



#endif //FILE_H
