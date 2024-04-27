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
    bool loggedIn;
public:
    User();
    User(const string& uname, const string& urole, const string& uemail, const string& upass);
    bool login(const string& uname, const string& upass);
    void logout();
    void changePassword(const string& new_password);
    string getUserRole();
    void setUser(string uname);
    void setRole(string urole);
    void setEmail(string uemail);
    void setPassword(string upass);

};

#endif

