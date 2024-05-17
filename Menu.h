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
    void displayMenu(vector<Student> & , Uni &, User &, vector<AcademicStaff> &, vector<Course> &, File & );
    void selectOption(User &);
    void selectOption(User &user,AcademicStaff &ac,File &file,const vector<string>& studentList);
    void selectOption(User &user,Student &student, File &file, Course &course);















//    void displayMenu(User*);
//    void displayMenu(Student* s);
//    void displayMenu(AcademicStaff*);
//    void displaySettings(User*);
//    int selectOption();
//    void executeOption(int);
//    void exitSystem();
    void displayMenu(vector<Student> &students, Uni uni, User admin, vector<AcademicStaff> &ac, vector<Course> &courses,
                     File file);
};


#endif
