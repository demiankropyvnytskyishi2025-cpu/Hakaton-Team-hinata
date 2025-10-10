#include <iostream>
using namespace std;
int main() {
    cout << "====Choose an option====" << endl;
    int choice;
    do {
        cout << "print 1 if Admin" << endl;
        cout << "print 2 if User" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "You are an Admin" << endl;
        } else if (choice == 2) {
            cout << "You are a User" << endl;
        } else if (choice == 0) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 0);
    return 0;
}
