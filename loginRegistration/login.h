#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <string>
using namespace std;

class UserLogin{
    private:
        string username;
        string password;
        string answer;
    public:
        void Login();
        void Registration();
        void ForgotPassword();
        void printInfo(string username, string password, string answer);
};

#endif