//
// Created by Ahmed Essam on 4/29/2024.
//

#include "Student.h"
#include "Course.h"

Student::Student(Course c[], int size) {
    int n; //temp for no. of courses
    // int g; //temp for grade
    // string c; //temp for course id
    cout << "\nStudent Name: ";
    getline(cin, name);
    cout << "Student ID: ";
    cin >> studentID;
    cout << "No of courses Enrolled: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i<n; i++) {
        enrollCourse(c, size, i);
    }
}

void Student::updateGrade() {
    string c; //temp for course id
    map<string, float>::iterator it ; //has the address of key-value pair;
    cin.ignore();
    cout << "\nTo change the grade please enter Course ID: ";
    getline(cin, c);
    it = grades.find(c);
    if(it == grades.end())
        cout << "\nStudent is not enrolled or course name is inncorrect" ;
    else {
        cout << "The new grade for Course " << it->first << " is: ";
        cin >> it->second;
    }
}

int Student::noOfEnrolledcourses() {
    return coursesEnrolled.size();
}
int Student::getID() {
    return studentID;
}
string Student::getName() {
    return name;
}
string Student::getEmail() {
    return email;
}



void Student::viewTranscript() {
    cout << "\nTranscript: ";
    cout << "Name: " << name << "\tID: " << studentID ;
    cout << "\n___________________________________________\n";
    cout <<"Course ID \tGrade\n";
    for(auto i = grades.begin(); i !=grades.end(); i++) {
        cout << i->first <<" \t\t" << i->second<< endl;
    }
    cout << "___________________________________________\n";
    cout << "Cumm. GPA: " << calculateGPA() << endl;;
}

float Student::calculateGPA() {
    float gpa = 0; //holds GPA
    for(auto i =grades.begin(); i !=grades.end(); i++) {
        gpa += i->second;
    }
    gpa = gpa/coursesEnrolled.size();
    return gpa;
}

void Student::enrollCourse(Course c[], int size, int nIters) {
    string cID; // temp for course ID
    float g; // temp for grade

    while (true) {
        cout << "\nCourse " << nIters + 1 << " ID: ";
        getline(cin, cID);

        for (int i = 0; i < size; i++) {
            if (cID == c[i].getCourseID()) {
                coursesEnrolled.push_back(cID);
                cout << "Enter GPA of course " << cID << ": ";
                cin >> g;
                cin.ignore();
                grades.insert({cID, g});
                c[i].enrollStudent(studentID);
                return; // Exit the method after successful enrollment
            }
        }
        cout << "Incorrect course ID. Please try again." << endl;
    }
}






