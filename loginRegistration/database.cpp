#include "database.h"

DataBase::DataBase(){
    ofstream file;
}

int DataBase::userRegister(const User& user, const string& fileName){
    this->file.open(fileName, ios::app);
}