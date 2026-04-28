
#include "user.h"
#include "database.h"
#include <iostream>
#include <cctype> // for user prompt
#include <vector>
using namespace std;

int main()
{
    cout << "Hello, would you like to add users to the database? (1)";
    int x = 0;
    cin >> x;
    string name = "db.txt";

    DataBase db;
    int er;
    er = db.userRegister(name);
    db.readDataBase(name);
           
    return 0;
}