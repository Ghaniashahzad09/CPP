#include<iostream>
#include<cctype>

using namespace std;

bool passwordcheck(const string& password) {
    bool hasupper = false;
    bool haslower = false;
    bool hasdigit = false;

    if(password.length() != 8) {
        cout << "Password must have at least 8 characters." << endl;
        return false;
    }

    for(char c : password) {
        if (c == ' ') {
            cout << "Spaces are not allowed." << endl;
            return false;
        }
    }

    for(char c : password) {
        if(isupper(c)) {
            hasupper = true;
        } else if(islower(c)) {
            haslower = true;
        } else if(isdigit(c)) {
            hasdigit = true;
        }

        // Break the loop if all conditions are met
        if(hasupper && haslower && hasdigit) {
            break;
        }
    }

    return hasupper && haslower && hasdigit;
}

int main() {
    string password;
    while(true) {
        cout << "\nWelcome to the Password strength checker!" << endl;

        cout << "Enter your password: ";
       getline(cin,password);

        if(passwordcheck(password)) {
            cout << "Strong password" << endl;
            break;  // Exit the loop if the password is valid
        } else {
            cout << "Password must contain at least one uppercase, one lowercase letter, and one digit." << endl;
        }
    }

    return 0;
}