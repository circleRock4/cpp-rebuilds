#include <iostream>
#include <fstream> // for file reading
#include <string.h> 
#include <vector>
#include <functional> // for hashing
#include <cmath> // for power function
#include <cstdlib> // rand() 
#include <ctime> // for time() (plan to pair with rand())
#include "login.h"
using namespace std;

int main(){

    UserLogin user;
    
    string name;
    cout << "enter a name: ";
    cin >> name;

    string password;
    cout << "\nenter a password: ";
    cin >> password;

    string answer;
    cout << "\nenter an answer: ";
    cin >> answer;

    user.printInfo(name, password, answer);


    return 0;
}