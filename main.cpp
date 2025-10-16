#include <iostream>
using namespace std;

// #include "search_for_product.h"
// #include "show_all_products_menu.h"
// #include "add_new_product.h"
// #include "products_costing_more_than_1000.h"
// #include "change_price_of_product.h"
// #include "delete_product.h"
// #include "number_of_products.h"

#include "user_interface.h"
#include "admin_interface.h"

int main() {
    cout << "====Choose an option====" << endl;
    int choice;

    do {
        cout << "Type 1 for Admin" << endl;
        cout << "Type 2 for User" << endl;
        cout << "Type 3 for Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "You are an Admin" << endl;
            admin_choice();
        }
        else if (choice == 2) {
            cout << "You are a User" << endl;
            user_choice();
        }
        else if (choice == 0) {
            cout << "Exiting..." << endl;
        }
        else {
            cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 0 && choice != 1 && choice != 2);

    return 0;
}