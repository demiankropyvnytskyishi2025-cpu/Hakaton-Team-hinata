#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include "admin_interface.h"
#include "user_interface.h"

using namespace std;

bool is_valid_integer(const string& input, int& value) {
    stringstream ss(input);
    ss >> value;

    return !ss.fail() && ss.eof();
}

int main() {
    string input;
    int choice;

    while (true) {
        cout << "MINI SHOP MANAGER PRO" << endl;
        cout << "====Choose an option====" << endl;

        cout << "Type 1 for Admin" << endl;
        cout << "Type 2 for User" << endl;
        cout << "Type 0 for Exit" << endl;

        cout << "Your choice: ";
        getline(cin, input);

        if (!is_valid_integer(input, choice)) {
            cout << "Invalid input. Please enter a whole number (0, 1, or 2)." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "You are an Admin" << endl;
                admin_choice();
                break;
            case 2:
                cout << "You are a User" << endl;
                user_choice();
                break;
            case 0:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }
    }
}