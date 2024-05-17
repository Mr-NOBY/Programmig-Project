#include "User.h"
#include <iostream>
#include <string>
using namespace std;

// User::User(const string& username, const string& role,
//           const string& email, const string& password)
//         : username(username), role(role), email(email), password(password) {}

User::User() {
    string u, r, e, p; // username role email password
    cout << "Enter username: ";
    getline(cin, u);
    username = u;
    cout << "Enter role (Academic staff, Student): ";
    getline(cin, r);
    role = r;
    cout << "Enter email address: ";
    getline(cin, e);
    email = e;
    cout << "Enter password: ";
    getline(cin, p);
    password = caesarCipher(p, 3);
}

void User::login() {
    string input_username, input_password;
    cout << "Enter username: ";
    getline(cin, input_username);
    cout << "Enter password: ";
    getline(cin, input_password);

    if (input_username == username && caesarCipher(input_password, 3) == password) {
        cout << "User " << username << " logged in successfully." << endl;
    }
    else {
        cout << "Login failed. Incorrect username or password." << endl;
        login();
    }
}

void User::logout() {
    cout << "User " << username << " logged out." << endl;
    // login();
}

void User::changePassword(const string& new_password) {
    password = caesarCipher(new_password, 3);
    cout << "Password changed successfully for user " << username << "." << endl;
}

string User::getUserRole() {
    return role;
}

string caesarCipher(const string str, int shift)
{
    string result = "";
    for (char c : str) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            result += (c - base + shift) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

void User::displayEncryptedPassword() {
    cout << "Encrypted password for user " << username << ": " << password << endl;
}
