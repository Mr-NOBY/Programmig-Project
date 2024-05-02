//
// Created by Ahmed Essam on 5/2/2024.
//

#include "File.h"
#include <fstream>

string File::formatData(Course* c, int size) {
    string formatedData = "ID, Name, Department, Credit Hours, No of Students\n";
    for (int i = 0 ; i<size; i++) {
        formatedData += ((c+i)->getCourseID() + ", "
                        + (c+i)->getCourseName() + ", "
                        + (c+i)->getCourseDepartment() + ", "
                        + to_string((c+i)->getCredHours()) + ", "
                        + to_string((c+i)->getNoEnrolled()) + "\n"
                        );
    }
    return formatedData;
}

string File::formatData(Student *s, int size) {
    string formatedData = "ID, Name, Email, No of Courses, GPA\n";
    for(int i =0; i<size; i++) {
        formatedData += (to_string((s+i)->getID()) + ", "
                        +(s+i)->getName() + ", "
                        +(s+i)->getEmail() + ", "
                        +to_string((s+i)->noOfEnrolledcourses()) + ", "
                        +to_string((s+i)->calculateGPA()) + "\n"
                        );
    }
    return formatedData;
}

void File::writeData(string s) {
    cout << "\nPlease Enter the directory to create the file: ";
    string direct;
    getline(cin, direct);
    cout << "\nPlease Enter a file name: ";
    string fileName;
    getline(cin, fileName);
    fstream fout;
    fout.open(direct+"\\"+ fileName + ".csv", ios::out);
    fout << s;
    cout << "Successfully outputed the data!\n";
}




