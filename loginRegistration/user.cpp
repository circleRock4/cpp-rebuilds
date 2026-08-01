#include "user.h"

/////////////// input validation /////////////////////////////////////
bool checkString(const string& nameInput){
    for(int i = 0; i < nameInput.length(); i++){
        if(nameInput[i] == '|'){
            return true;
        }
    }
    return false;
}
//////////////////////////////////////////////////////////////////////


void User::registration(){
    string name, password, answer;
    bool checkString2 = false;

    cout << endl;
    cout << "Enter your first name: ";
    cin >> name; 

    while((checkString2 = checkString)){
        cout << "Enter your first name: ";
        cin >> name;
    }
    
    cout << endl;
    cout << "Enter a password: ";
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

