//
// Created by Ahmed Essam on 4/29/2024.
//

#include "Student.h"

Student::Student() {
    int n; //temp for no. of courses
    int g; //temp for grade
    string c; //temp for course id
    cout << "\nStudent Name: ";
    getline(cin, name);
    cout << "\nStudent ID: ";
    cin >> studentID;
    cout << "\nNo of courses Enrolled: ";
    cin >> n;
    for (int i = 0; i<n; i++) {
        cout << "\nCourse " << i+1 << " ID: ";
        getline(cin, c);
        coursesEnrolled.push_back(c);
    }
    for (int i =0; i<n; i++) {
        cout << "\nEnter Grade of course " << coursesEnrolled[i] <<": ";
        cin >> g;
        grades.insert({coursesEnrolled[i], g} );
    }
}

void Student::updateGrade() {
    string c; //temp for course id
    map<string, int>::iterator it ; //has the address of key-value pair;
    cout << "\nPlease enter Course ID: ";
    getline(cin, c);
    it = grades.find(c);
    if(it == grades.end())
        cout << "\nStudent is not enrolled or course name is inncorrect" ;
    else {
        cout << "The new grade for Course " << it->first << " is: ";
        cin >> it->second;
    }
}

void Student::viewTranscript() {
    cout << "\nTranscript: ";
    cout << "Name: " << name << "\tID: " << studentID ;
    cout << "\n___________________________________________\n";
    cout <<"Course ID \tGrade\n";
    for(auto i = grades.begin(); i !=grades.end(); i++) {
        cout << i->first <<" \t" << i->second << endl;
    }
}

void Student::calculateGPA() {
    //to be implemented
}

void Student::enrollCourse() {
    //to be implemented
}





