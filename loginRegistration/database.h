#ifndef DATABASE_H
#define DATABASE_H

#include "user.h"
#include <functional> // for hashing
#include <ctime>
#include <random> // time() rand() pairing
#include <vector>

class DataBase{
    private:
        string filename;
        ofstream writeFile;
        ifstream readFile;
    public:
        int userRegister(const string& fileName); // registers user.
        void readDataBase(const string& fileName);
        void addToFile(User& user);
};


#endif