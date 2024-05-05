#ifndef PROGRAMMIG_PROJECT_MENU_H
#define PROGRAMMIG_PROJECT_MENU_H
#include "User.h"
#include "Student.h"
#include "AcademicStaff.h"

class Menu {
protected:
    int choice;
public:
    void displayMenu(User*);
    void displayMenu(Student*);
    void displayMenu(AcademicStaff*);
    void displaySettings(User*);
//    int selectOption();
//    void executeOption(int);
//    void exitSystem();
};


#endif
