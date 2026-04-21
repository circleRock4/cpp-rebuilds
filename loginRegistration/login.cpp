#include "login.h"

void UserLogin::printInfo(string name, string password, string answer){
    this->username = name;
    this->password = password;
    this->answer = answer;

    cout << this->username << " " << this->password << " " << this->answer;
}

