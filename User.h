#ifndef PROGRAMMIG_PROJECT_USER_H
#define PROGRAMMIG_PROJECT_USER_H
#include <iostream>
using namespace std;

class User {
protected:
    string username;
    string role;
    string email;
    string password;

public:
    User();
    User(const string& username, const string& role, const string& email, const string& password);
    void login();
    void logout();
    void changePassword(const string& new_password);
    string getUserRole();
    void setUser(string uname);
    void setRole(string urole);
    void setEmail(string uemail);
    void setPassword(string upass);

};

#endif

