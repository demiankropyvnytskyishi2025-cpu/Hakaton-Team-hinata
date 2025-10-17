#include <iostream>
#include "admin_interface.h"
#include "user_interface.h"

using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "MINI SHOP MANAGER PRO" << endl;
        cout << "====Choose an option====" << endl;

        do {
            cout << "Type 1 for Admin" << endl;
            cout << "Type 2 for User" << endl;
            cout << "Type 0 for Exit" << endl;
            cout << "Your choice: ";
            cin >> choice;
            
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

        } while (choice != 0 && choice != 1 && choice != 2);
    }
}