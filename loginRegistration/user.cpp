#include "user.h"

void User::registration(){
    string name, password, answer;

    cout << endl;
    cout << "Enter a name: ";
    cin >> name;
    cout << endl << "Enter a password: ";
    cin >> password;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush buffer for getline()
    cout<< endl << "Favorite ice cream? ";
    getline(cin, answer);
    
    this->username = name;
    this->password = password;
    this->answer = answer;
}

string User::returnUserName() const{
    return this->username;
}
        
string User::returnPassWord() const{
    return this->password;
}

string User::returnAnswer() const{
    return this->answer;
}

