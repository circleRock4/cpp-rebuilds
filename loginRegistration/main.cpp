
#include "user.h"
#include "database.h"
#include <iostream>
#include <cctype> // for user prompt
using namespace std;

int main()
{
    cout << R"( 
 
 __ __   _____   ___  ____  
|  |  | / ___/  /  _]|    \ 
|  |  |(   \_  /  [_ |  D  )
|  |  | \__  ||    _]|    / 
|  :  | /  \ ||   [_ |    \ 
|     | \    ||     ||  .  \
 \__,_|  \___||_____||__|\_|
                            
     _       ___    ____    
    | |     /   \  /    |   
    | |    |     ||   __|   
    | |___ |  O  ||  |  |   
    |     ||     ||  |_ |   
    |     ||     ||     |   
    |_____| \___/ |___,_|   
                            
 ____  ____                 
|    ||    \                
 |  | |  _  |               
 |  | |  |  |               
 |  | |  |  |               
 |  | |  |  |               
|____||__|__|               
                            
)" << endl << "by circleRock4" << endl << endl;
    cout << "==============================================================" << endl;
    cout << "What would you like to do? Type in the corresponding number: " << endl;
    cout << "\t> add user(s)            [1]" << endl;
    cout << "\t> sign in                [2]" << endl;
    cout << "\t> forgot password        [3]" << endl; // maybe I come back to this instead of manual spacing
    cout << "\t> read existing database [4]" << endl << endl;
    cout << "==============================================================" << endl;

    int choice = 0;
    cin >> choice;

    string name = "db.txt";

    DataBase db;
    int er = db.userRegister(name);
    db.readDataBase(name);
           
    return 0;
}