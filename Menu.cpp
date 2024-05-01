#include "Menu.h"
#include <iostream>
#include "User.h"
using namespace std;

void Menu::displayMenu(User *u) {
    do {
        cout << "\nMenu:\n";
        cout << "1. Logout\n";
        cout << "2. Change Password\n";
        cout << "3. Get User Role\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                u->logout();
                break;
            case 2: {
                string new_password;
                cout << "Enter new password: ";
                cin >> new_password;
                u->changePassword(new_password);
                break;
            }
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
