#include <iostream>
#include "session_state.h"
#include "admin_interface.h"
#include "user_interface.h"

using namespace std;

int main() {
    int choice;

    cout << "====Choose an option====" << endl;

    do {
        cout << "Type 1 for Admin" << endl;
        cout << "Type 2 for User" << endl;
        cout << "Type 0 for Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 1) {
            is_admin = true;
            cout << "You are an Admin" << endl;
            admin_choice();
        }
        else if (choice == 2) {
            is_admin = false;
            cout << "You are a User" << endl;
            user_choice();
        }
        else if (choice == 0) {
            cout << "Exiting..." << endl;
            break;
        }
        else {
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 0 && choice != 1 && choice != 2);

    return 0;
}