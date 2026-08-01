#include "database.h"
#include <string>

int DataBase::userRegister(const string& fileName){
    this->filename = fileName;
    this->writeFile.open(fileName, ios::app);

    int error = 0;
    if(!writeFile){
        error = 1;
        return error;
    }

    User container;

    addToFile(container);
    
    writeFile.close();

    return error;
}

void DataBase::addToFile(User& container){
    cout << "How many? ";
    int x = 1;
    cin >> x;
    for(int k = 0; k < x; k++){
        container.registration();
        writeFile << container.returnUserName() << "|" << container.returnPassWord() << "|" << container.returnAnswer() << endl;
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
