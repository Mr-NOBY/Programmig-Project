//
// Created by Ahmed Essam on 5/2/2024.
//

#include "File.h"
#include <fstream>
#include <sstream>

string File::formatData(vector<Course> c, int size) {
    string formatedData = "ID, Name, Department, Credit Hours, No of Students\n";
    for (int i = 0 ; i<size; i++) {
        formatedData += (c[i].getCourseID() + ", "
                        + c[i].getCourseName() + ", "
                        + c[i].getCourseDepartment() + ", "
                        + to_string(c[i].getCredHours()) + ", "
                        + to_string(c[i].getNoEnrolled()) + "\n"
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
    fout.close();
    fout.open(direct+"\\"+ fileName + ".csv", ios::out | ios::app);
}

vector<string> File::readData() {
    vector<string> lines;
    string line;
    cout << "\nPlease Enter the directory to read the file: ";
    string direct;
    getline(cin, direct);
    cout << "\nPlease Enter a file name: ";
    string fileName;
    getline(cin, fileName);
    fstream fin;
    fin.open(direct+"\\"+ fileName + ".csv", ios::in);
    while (!fin.eof()) {
        getline(fin, line);
        lines.push_back(line);
    }
    cout << "Successfully inputed the data!\n";
    return lines;
}


variant<vector<Course>, vector<Student>> File::parseData(vector<string> data) {
    vector<Course> newCourses;
    vector<Student> newStudents;
    for (int i = 1; i< data.size(); i++) {

        vector<string> oneRow;
        stringstream ss(data[i]);
        while(ss.good()) {
            string substr;
            getline(ss, substr, ',');
            oneRow.push_back(substr);
        }

        if((oneRow[0][0] >= 'a' && oneRow[0][0] <= 'z') || (oneRow[0][0] >= 'A' && oneRow[0][0] <= 'Z')) {
            Course c(oneRow[0], oneRow[1], oneRow[2], stoi(oneRow[3]));
            newCourses.push_back(c);
        } else {

            // Student x;
        }
  }
    if(!newCourses.empty())
        return newCourses;


}



