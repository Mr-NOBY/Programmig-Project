#include<iostream>

#include "Student.h"
#include "User.h"
#include "Uni.h"
using namespace std;

// int main()
// {
//     string username, role, email, password;
//     cout << "Enter username: ";
//     cin >> username;
//     cout << "Enter role (admin, academic staff, student): ";
//     cin >> role;
//     cout << "Enter email address: ";
//     cin >> email;
//     cout << "Enter encrypted password: ";
//     cin >> password;
//
//     User user(username, role, email, password);
//     bool loggedIn = false;
//     while (!loggedIn) {
//         string input_username, input_password;
//         cout << "Enter username: ";
//         cin >> input_username;
//         cout << "Enter password: ";
//         cin >> input_password;
//
//         // Authenticate user
//         if (input_username == user.getUsername() && input_password == user.getPassword()) {
//             loggedIn = true;
//             cout << "User " << username << " logged in successfully." << std::endl;
//         } else {
//             cout << "Authentication failed. Incorrect username or password. Try again." << std::endl;
//         }
//     }
//
//     int choice;
//     do {
//        cout << "\nMenu:\n";
//        cout << "1. Logout\n";
//        cout << "2. Change Password\n";
//        cout << "3. Get User Role\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//         switch (choice) {
//             case 1:
//                 user.logout();
//                 break;
//             case 2: {
//                string new_password;
//                cout << "Enter new password: ";
//                cin >> new_password;
//                 user.changePassword(new_password);
//                 break;
//             }
//             case 3:
//                cout << "User role: " << user.getUserRole() << endl;
//                 break;
//             case 0:
//                 cout << "Exiting program. Goodbye!" <<endl;
//                 break;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     } while (choice != 0);
//
//     return 0;
// }


// int main() {
//     Uni msa;
//     msa.addCollege();
//     msa.addCollege();
//     msa.addDepartment();
//     msa.addDepartment();
//     vector<string> collgs = msa.getColleges();
//     vector<string> departs = msa.getDeparments();
//     for(int i=0; i<collgs.size();i++) {
//         cout << collgs[i] << " / ";
//     }
//     for(int i=0; i<departs.size(); i++) {
//         cout << departs[i] <<" / ";
//     }
// }

// int main() {
//     Student ahmed;
//     Course c1;
//     ahmed.viewTranscript();
//     ahmed.enrollCourse(c1); //not working properly
//     ahmed.viewTranscript();
//     ahmed.updateGrade();
//     ahmed.viewTranscript();
//     c1.viewCourseDetails();
//     c1.listEnrolledStu();
//     c1.updateCredits();
//     c1.viewCourseDetails();
// }