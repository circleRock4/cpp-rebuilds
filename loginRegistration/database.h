// defining the database that writes to a text file

#ifndef DATABASE_H
#define DATABASE_H

#include "user.h"

class DataBase{
    private:
        string filename;
        ofstream file;
    public:
        int userRegister(const User& user, const string& fileName); // registers user
};


#endif