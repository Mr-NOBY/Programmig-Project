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
    void login();
    void logout();
    void changePassword(const string& new_password);
    string getUserRole();
    void displayEncryptedPassword();
};

string caesarCipher(const string str, int shift);

#endif

