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
public:
    Menu();
    void displayMenu(Student student, Uni admin, User user, AcademicStaff ac,Course course,File file);
    void selectOption(User &user, Uni &admin);
    void selectOption(User &user,AcademicStaff &ac,File &file, Course &course,const vector<string>& studentList);
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
