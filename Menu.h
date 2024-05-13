#ifndef PROGRAMMIG_PROJECT_MENU_H
#define PROGRAMMIG_PROJECT_MENU_H
#include "User.h"
#include "Student.h"
#include "AcademicStaff.h"
#include "Uni.h"
#include "File.h"

class Menu {
protected:
    int choice;
    User user;
    Uni admin;
    Student student;
    File file;
    Course course;
    AcademicStaff ac;
public:
    void displayMenu();
    void selectOption(User &user, Uni &admin);
    void selectOption(User &user,AcademicStaff &ac,File &file, Course &course);
    void selectOption(User &user,Student &student, File &file, Course &course);















//    void displayMenu(User*);
//    void displayMenu(Student* s);
//    void displayMenu(AcademicStaff*);
//    void displaySettings(User*);
//    int selectOption();
//    void executeOption(int);
//    void exitSystem();
};


#endif
