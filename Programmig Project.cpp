﻿#include<iostream>
#include "User.h"
using namespace std;

int main()
{
    string username, role, email, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter role (admin, academic staff, student): ";
    cin >> role;
    cout << "Enter email address: ";
    cin >> email;
    cout << "Enter encrypted password: ";
    cin >> password;

    User user(username, role, email, password);
    user.login();

    int choice;
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
                user.logout();
                break;
            case 2: {
               string new_password;
               cout << "Enter new password: ";
               cin >> new_password;
                user.changePassword(new_password);
                break;
            }
            case 3:
               cout << "User role: " << user.getUserRole() << endl;
                break;
            case 0:
                cout << "Exiting program. Goodbye!" <<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

