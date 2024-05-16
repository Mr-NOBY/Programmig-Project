#include <iostream>
#include "User.h"
#include "Menu.h"
#include "AcademicStaff.h"
#include "Student.h"
#include "Uni.h"
#include "File.h"
#include <vector>
#include <string>
using namespace std;

Menu::Menu(){

}
void Menu::displayMenu(Student student, Uni admin, User user, Student ac, Course course, File file) {
    cout << "\t MAIN MENU" << endl << "__________________________" <<
         endl << "Select Menu For:       " << endl <<
         "[1]  ADMIN      " << endl <<
         "[2]  ACADEMIC STAFF     " << endl <<
         "[3]  STUDENT   " << endl;
    cin>> choice;
    if (choice == 1) {
        selectOption(user, admin);
    } else if (choice == 2) {
        selectOption( user,  ac, file, course);
    } else if (choice == 3) {
        selectOption(user, student, file, course);
    }
}

void Menu::selectOption(User &user, Uni &admin) {

    cout<< "CHOOSE AN OPTION :" <<endl;
    cout << "CHANGE PASSWORD     [1]" << endl <<
         "ADD COLLEGE     [2]" << endl <<
         "ADD DEPARTMENT  [3]" <<
         "GET COLLEGE    [4]" << endl <<
         "GET DEPARTMENT   [5]" << endl <<
         "EXIT            [6]" <<endl;
    cin>>choice;
    string new_password = "new_password";
    do {
        switch (choice) {
            case 1:
                user.changePassword(new_password);
                break;
            case 2:
                admin.addCollege();
                break;
            case 3:
                admin.addDepartment();
                break;
            case 4:
                admin.getColleges();
                break;
            case 5:
                admin.getDeparments();
                break;
            case 7:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;

        }


    }while(choice !=7);
}

void Menu::selectOption(User &user, AcademicStaff &ac, File &file, Course &course,const vector<string>& studentList) {
    string new_password = "new_password";
    string Course =" ";
    string officeH=" ";

    cout<< "CHOOSE AN OPTION :" <<endl;
    cout << "[1]CHANGE PASSWORD     " << endl <<
         "[2]   ADD COURSE     " << endl <<
         "[3]   GRADE ASSIGNMENT  " <<
         "[4]   VIEW STUDENT LIST    " << endl <<
         "[5]   SCHEDULE OFFICE HOURS   " << endl <<
         "[6]   GET COURSES TAUGHT           " <<endl <<
         "[7]   EXIT            " <<endl;

    auto courses = ac.getCoursesTaught();
    cin>>choice;
    do{
        switch (choice) {
            case 1:
                user.changePassword(new_password);
                break;
            case 2:
                cout << "Enter name of class";
                cin >> Course;
               ac.addCourseTaught(Course);
                break;
            case 3:
               ac.gradeAssignment();
                break;
            case 4:
                ac.viewStudentList(studentList);
                break;
            case 5:
                cout << "Enter office hours";
                cin >> officeH;
               ac.scheduleOfficeHours(officeH);
                break;
            case 6:
                 for(const string& crs : courses){
                     cout << crs;
                 }
                 break;
            case 7:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;

        }

        } while (choice!=7);
}



void Menu::selectOption(User &user, Student &student, File &file, Course &course) {
    string new_password = "new_password";

        cout<< "CHOOSE AN OPTION :" <<endl;
        cout << "CHANGE PASSWORD     [1]" << endl <<
             "GET ID     [2]" << endl <<
             "GET NAME  [3]" <<
             "GET EMAIL    [4]" << endl <<
             "GET NUMBER OF ENROLLED COURSES   [5]" << endl <<
             "CALCULATE GPA           [6]" <<endl <<
             "UPDATE GRADE           [7]" <<endl <<
             "ENROLL COURSE           [8]" <<endl <<
             "EXIT            [9]" <<endl;
        cin>>choice;

        do{
            switch (choice) {
                case 1:
                     user.changePassword(new_password);
                    break;
                case 2:
                    cout<< student.getID() <<endl;
                    break;
                case 3:
                    cout << student.getName()<<endl;
                    break;
                case 4:
                    cout << student.getEmail()<<endl;
                    break;
                case 5:
                   cout << student.noOfEnrolledcourses()<<endl;
                    break;
                case 6:
                    cout << student.calculateGPA()<<endl;
                    break;
                case 7:
                    student.updateGrade();
                    break;
                case 8:
                    //student.enrollCourse(vector<Course>&, int);
                    break;
                case 9:
                    cout << "Exiting program. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }

        } while (choice!=9);
}







//void Menu::displayMenu(User *u) {
//    do {
//        cout << "Enter your Role \n 1- Student" << endl << "2- Academic Staff" << endl << " 3- Admin \n"<< "4- System Settings: \n";
//        cin >> choice;
//        if (choice == 1) {
//            Menu displayMenu(); //Students
//        } else if (choice == 2) {
//            Menu displayMenu(); //AC
//        } else if (choice == 3) {
//            cout << "Enter a choice: " << endl;
//            cout << "1- Add a new college to the university\n" << "2- Add a new department to the university \n"
//                 << "3- Return the list of colleges affiliated with the university \n"
//                 << "4- Return the list of departments within the university \n" << "0- Logout\n";
//            cin >> choice;
//            switch (choice) {
//                case 1:
////                    User addCollege();
//                    break;
//                case 2:
////                    User addDepartment();
//                    break;
//                case 3:
////                    User getColleges();
//                    break;
//                case 4:
////                    User getDeparments();
//                    break;
//                case 0:
//                    cout << "Exiting program. Goodbye!" << endl;
//                    break;
//                default:
//                    cout << "Invalid choice. Please try again." << endl;
//
//            }
//
//
//
//        } else if(choice==4){
//            Menu displaySettings();
//        }
//
//    } while (choice != 0);
//}
//
//
//void Menu::displayMenu(Student *s) {
//    cout << "Enter a choice: " << endl;
//    cout << "1- Enroll in a course\n" << "2- Display the academic transcript \n"
//                 << "3- Calculate the GPA based on grades \n"
//                 << "4- Update the grade for a course \n" << "0- Logout\n";
//            cin >> choice;
//            do {
//                switch (choice) {
//                    case 1:
////                        s->enrollCourse(Course[], int, int);
//                        break;
//                    case 2:
//                        s->viewTranscript();
//                        break;
//                    case 3:
//                        s->calculateGPA();
//                        break;
//                    case 4:
//                        s->updateGrade();
//                        break;
//                    case 0:
//                        cout << "Exiting program. Goodbye!" << endl;
//                        break;
//                    default:
//                        cout << "Invalid choice. Please try again." << endl;
//
//
//                }
//            } while (choice != 0);
//        }
//
//
//void Menu::displayMenu(AcademicStaff *a) {
//    do {
//        cout << "Enter a choice: " << endl;
//        cout << "1- Assign a course \n" << "2- Grade assignments \n"
//             << "3- Display the list of students enrolled in courses \n"
//             << "4- Sets office hours \n" << "0- Logout\n";
//        cin >> choice;
//        switch (choice) {
//            case 1:
////                    a-> teachCourse();
//                break;
//            case 2:
////                    a-> gradeAssignment();
//                break;
//            case 3:
////                    a-> viewStudentList();
//                break;
//            case 4:
////                    a-> scheduleOfficeHours();
//                break;
//            case 0:
//                cout << "Exiting program. Goodbye!" << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice !=0);
//}
//
//void Menu::displaySettings(User *u) {
//    string new_password;
//
//    cout << "\nMenu:\n";
//    cout << "1. Logout\n";
//    cout << "2. Change Password\n";
//    cout << "3. Get User Role\n";
//    cout << "0. Exit\n";
//    cout << "Enter your choice: ";
//    cin >> choice;
//    do {
//        switch (choice) {
//            case 1:
//                u->logout();
//                break;
//            case 2:
//                cout << "Enter new password: ";
//                cin >> new_password;
//                u->changePassword(new_password);
//                break;
//            case 3:
//                cout << "User role: " << u->getUserRole() << endl;
//                break;
//            case 0:
//                cout << "Exiting program. Goodbye!" << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != 0);
//}


//int selectOption() {
//    int option;
//    cout << "Please select an option: ";
//    cin >> option;
//    return option;
//}
//void executeOption(int choice) {
//
//}
//void exitSystem() {
//   cout << "Exiting the system! " << endl;
//    exit(0);
//}



















//        cout << "\nMenu:\n";
//        cout << "1. Logout\n";
//        cout << "2. Change Password\n";
//        cout << "3. Get User Role\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                u->logout();
//                break;
//            case 2: {
//                string new_password;
//                cout << "Enter new password: ";
//                cin >> new_password;
//                u->changePassword(new_password);
//                break;
//            }
//            case 3:
//                cout << "User role: " << u->getUserRole() << endl;
//                break;
//            case 0:
//                cout << "Exiting program. Goodbye!" << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please try again." << endl;
//        }
//    } while (choice != 0);
//    }
//