#include<iostream>
#include "User.h"
using namespace std;

int main()
{
User x;
string uname ,urole ,uemail ,upass;
cout << "Please, Enter your username: "<<endl;
cin>> uname;
x.setUser(uname);
cout << "Please, Enter your password: "<<endl;
cin >> upass;
x.setPassword(upass);
cout << "Please, Enter your email: "<<endl;
cin >> uemail;
x.setEmail(uemail);
cout << "Please, Enter your role: "<<endl;
cin >> urole;
x.setRole(urole);

if (x.login(uname,upass )) {
        cout << "Authentication successful for user: " << x.getUserRole() <<endl;
    }
else {
        cout << "Authentication failed. Invalid username or password." << std::endl;
    }
}
