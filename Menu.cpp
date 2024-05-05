#include <iostream>
#include "User.h"
#include "Menu.h"
#include "AcademicStaff.h"
#include "Student.h"
#include "Uni.h"
using namespace std;

void Menu::displayMenu(User *u) {
    do {
        cout << "Enter your Role \n 1- Student" << endl << "2- Academic Staff" << endl << " 3- Admin \n"<< "4- System Settings: \n";
        cin >> choice;
        if (choice == 1) {
            Menu displayMenu(); //Students
        } else if (choice == 2) {
            Menu displayMenu(); //AC
        } else if (choice == 3) {
            cout << "Enter a choice: " << endl;
            cout << "1- Add a new college to the university\n" << "2- Add a new department to the university \n"
                 << "3- Return the list of colleges affiliated with the university \n"
                 << "4- Return the list of departments within the university \n" << "0- Logout\n";
            cin >> choice;
            switch (choice) {
                case 1:
//                    User addCollege();
                    break;
                case 2:
//                    User addDepartment();
                    break;
                case 3:
//                    User getColleges();
                    break;
                case 4:
//                    User getDeparments();
                    break;
                case 0:
                    cout << "Exiting program. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;

            }



        } else if(choice==4){
            Menu displaySettings();
        }

    } while (choice != 0);
}


void Menu::displayMenu(Student *s) {
    cout << "Enter a choice: " << endl;
    cout << "1- Enroll in a course\n" << "2- Display the academic transcript \n"
                 << "3- Calculate the GPA based on grades \n"
                 << "4- Update the grade for a course \n" << "0- Logout\n";
            cin >> choice;
            do {
                switch (choice) {
                    case 1:
//                        s->enrollCourse(Course[], int, int);
                        break;
                    case 2:
                        s->viewTranscript();
                        break;
                    case 3:
                        s->calculateGPA();
                        break;
                    case 4:
                        s->updateGrade();
                        break;
                    case 0:
                        cout << "Exiting program. Goodbye!" << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;


                }
            } while (choice != 0);
        }


void Menu::displayMenu(AcademicStaff *a) {
    do {
        cout << "Enter a choice: " << endl;
        cout << "1- Assign a course \n" << "2- Grade assignments \n"
             << "3- Display the list of students enrolled in courses \n"
             << "4- Sets office hours \n" << "0- Logout\n";
        cin >> choice;
        switch (choice) {
            case 1:
//                    a-> teachCourse();
                break;
            case 2:
//                    a-> gradeAssignment();
                break;
            case 3:
//                    a-> viewStudentList();
                break;
            case 4:
//                    a-> scheduleOfficeHours();
                break;
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice !=0);
}

void Menu::displaySettings(User *u) {
    string new_password;

    cout << "\nMenu:\n";
    cout << "1. Logout\n";
    cout << "2. Change Password\n";
    cout << "3. Get User Role\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    do {
        switch (choice) {
            case 1:
                u->logout();
                break;
            case 2:
                cout << "Enter new password: ";
                cin >> new_password;
                u->changePassword(new_password);
                break;
            case 3:
                cout << "User role: " << u->getUserRole() << endl;
                break;
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}


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