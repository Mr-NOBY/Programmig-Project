//
// Created by Ahmed Essam on 5/16/2024.
//

#ifndef MAINMENU_H
#define MAINMENU_H
#include "AcademicStaff.h"
#include "File.h"
#include "Student.h"
#include "Uni.h"


class MainMenu {
protected :
    int choice;
    int index;
    int courseIndex;
    static vector<Student> students;
    static vector<Course> courses;
    static vector<AcademicStaff> acads;
    static User admin;
    static Uni uni;
    static File file;
public:
    MainMenu();
    void displayMenu();
    void displayUMenu();
    void displaySMenu();
    void displayAMenu();
    void displayCMenu();
    void sMenu();
    void studentIndex();
    void uMenu();
    void cIndex();
    void cMenu();
    void acMenu();
    void acadIndex();
    void newStudent();
    void newAcademicStuff();
    void clearScreen();
};



#endif //MAINMENU_H
