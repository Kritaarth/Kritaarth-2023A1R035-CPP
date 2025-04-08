/*
Write a program to
a. create a base class with name Admin
b. Define default attributes like username "admin" and password = 123
c. Create function Login(), this function will first validate username and 
password and then display information of the user
d. Create function Guest_Login(), this function will allow user login for limited
time and display only limited information like welcome message and current login location
e. create a derived class 1 with name DBA, this class will extends admin class attributes
with Login() function, after successful login
f. create a function to store user information
g. create a derived class 2 with name guest 
this class will access Guest_Login() function from admin class and then store feedback message 

*/


#include <iostream>
#include <string>
using namespace std;

class Admin {
protected:
    string username = "admin";
    int password = 123;

public:

    void Login() {
        string inputUser;
        int inputPass;

        cout << "Enter username: ";
        cin >> inputUser;
        cout << "Enter password: ";
        cin >> inputPass;

        if (inputUser == username && inputPass == password) {
            cout << "Login successful!\n";
            cout << "User: " << username << endl;
            cout << "Access Level: Admin\n";
        } else {
            cout << "Invalid username or password!\n";
        }
    }

    void Guest_Login() {
        cout << "Welcome, Guest!\n";
        cout << "You have limited access.\n";
        cout << "Current login location: MIET Jammu \n";
    }
};

class DBA : public Admin {
public:
    
    void DBA_Login() {
        cout << "DBA Login\n";
        Login(); 
    }

    void StoreUserInfo() {
        string name, email;
        cout << "Enter user name: ";
        cin >> name;
        cout << "Enter user email: ";
        cin >> email;
        cout << "User info stored!\n";
        cout << "Name: " << name << ", Email: " << email << endl;
    }
};

class Guest : public Admin {
public:
    
    void GuestAccess() {
        Guest_Login(); 
        string feedback;
        cout << "Enter your feedback: ";
        cin.ignore(); 
        getline(cin, feedback);
        cout << "Thank you for your feedback: \"" << feedback << "\"\n";
    }
};

int main() {
    int choice;
    cout << "Select User Type:\n";
    cout << "1. Admin/DBA Login\n";
    cout << "2. Guest Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        DBA dbaUser;
        dbaUser.DBA_Login();
        char saveInfo;
        cout << "Do you want to store user info? (y/n): ";
        cin >> saveInfo;
        if (saveInfo == 'y' || saveInfo == 'Y') {
            dbaUser.StoreUserInfo();
        }
    } else if (choice == 2) {
        Guest guestUser;
        guestUser.GuestAccess();
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
