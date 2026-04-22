// to define the User object that will be stored in the database

#ifndef USER_H
#define USER_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class User{
    private:
        string username;
        string password;
        string answer;
    public:
        void printInfo(string username, string password, string answer); // just to check that info is in object
        void Registration(string username, string password, string answer); // when a new user registers to the db
        
};

#endif