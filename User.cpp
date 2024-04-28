#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User(const string& username, const string& role,
           const string& email, const string& password)
        : username(username), role(role), email(email), password(password) {}

void User::login() {
    string input_username, input_password;
    cout << "Enter username: ";
    cin >> input_username;
    cout << "Enter password: ";
    cin >> input_password;

    if (input_username == username && input_password == password) {
        cout << "User " << username << " logged in successfully." << endl;
    }
    else {
        cout << "Login failed. Incorrect username or password." << endl;
        login();
    }
}

void User::logout() {
    cout << "User " << username << " logged out." << std::endl;
    login();
}

void User::changePassword(const string& new_password) {
    password = new_password;
    cout << "Password changed successfully for user " << username << "." << endl;
}

string User::getUserRole() {
    return role;
}

void User::setUser(string uname) {
    username = uname;
}

void User::setEmail(string uemail) {
email = uemail;
}

void User::setRole(string urole) {
    role =urole;
}

void User::setPassword(std::string upass) {
    password= upass;
}

User::User() {}

string User::getUsername() const {
    return username;
}

string User::getPassword() const {
    return password;
}