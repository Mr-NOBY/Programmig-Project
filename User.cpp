#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User(const std::string& uname, const std::string& urole, const std::string& uemail, const std::string& upass)
        : username(uname), role(urole), email(uemail), password(upass), loggedIn(false) {}

bool User::login(const string& uname, const string& upass) {
    if (username == uname && password == upass) {
        loggedIn = true;
        return true;
    } else {
        return false;
    }
}

void User::logout() {
    if (loggedIn) {
        loggedIn = false;
        cout << "User " << username << " logged out." << endl;
    } else {
       cout << "You are not currently logged in." << std::endl;
    }
}

void User::changePassword(const string& newPass) {
    password = newPass;
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