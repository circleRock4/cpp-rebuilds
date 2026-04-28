#ifndef USER_H
#define USER_H

#include <fstream>
#include <string>
#include <limits>
#include <iostream>
using namespace std;

class User{
    private:
        string username;
        string password;
        string answer;
    public:
        void registration(); // kind of the master function that uses the other functions
        string returnUserName() const;
        string returnPassWord() const;
        string returnAnswer() const;
};

#endif