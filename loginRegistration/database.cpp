#include "database.h"

int DataBase::userRegister(const string& fileName){
    this->writeFile.open(fileName, ios::app);

    int error = 0;
    if(!writeFile){
        error = 1;
        return error;
    }

    User user;

    addToFile(user);
    
    writeFile.close();

    return error;
}

void DataBase::addToFile(User& user){
    cout << "How many? ";
    int x = 1;
    cin >> x;
    for(int k = 0; k < x; k++){
        user.registration();
        writeFile << user.returnUserName() << "|" << user.returnPassWord() << "|" << user.returnAnswer() << endl;
    }
    cout << endl << "all done!" << endl;
}

void DataBase::readDataBase(const string& fileName){
    this->readFile.open(fileName);

    if(!readFile){
        cout << "Could not open file for reading" << endl;
        return;
    }
    cout << fileName << endl;
    string line;
    while(getline(readFile, line)){
        cout << "\n" << fileName << ": " << line << endl;       
    }
    readFile.close();
}
