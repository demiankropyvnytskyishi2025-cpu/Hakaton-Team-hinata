#include <iostream>
#include <string>

#include "admin_functions.h"
#include "common_functions.h"

using namespace std;

void admin_choice() {
    int choice;

    while (true) {
        cout << "Choose an action: " << endl;
        cout << "1 - add a new product" << endl;
        cout << "2 - delete a product" << endl;
        cout << "3 - search for a product" << endl;
        cout << "4 - search for the most expensive product" << endl;
        cout << "5 - change the price of a product" << endl;
        cout << "6 - count the number of products" << endl;
        cout << "7 - count the number of products costing less than 100" << endl;
        cout << "8 - do a discount for products costing more than 1000" << endl;
        cout << "9 - show products in a specific category " << endl;
        cout << "10 - exit to the menu" << endl;

        do {
            cout << "Your choice: ";
            cin >> choice;
            cout << endl;
        } while (choice < 1 || choice > 10);

        switch (choice) {
            case 1:
                cout << "You've chosen the option for adding the product" << endl;
                add_new_product();
                break;
            case 2:
                cout << "You've chosen the option for deleting the product" << endl;
                delete_product();
                break;
            case 3:
                cout << "You've chosen the option for searching the product" << endl;
                search_for_product();
                break;
            case 4:
                cout << "You've chosen the option for searching the most expensive product" << endl;
                max_value_product();
                break;
            case 5:
                cout << "You've chosen the option for changing the price of a product" << endl;
                change_price();
                break;
            case 6:
                cout << "You've chosen the option for counting the number of products" << endl;
                count_the_total_number_of_products();
                break;
            case 7:
                cout << "You've chosen the option for counting the number of products costing less than 100" << endl;
                count_the_number_of_products_cheaper_than_100();
                break;
            case 8:
                cout << "You've chosen the option for making a 90% discount for products costing more than 1000" << endl;
                discount_for_expensive_products();
                break;
            case 9:
                cout << "You chose to show all the products in a specific category" << endl;
                show_all_products_menu();
                break;
            case 10:
                cout << "You chose to exit to the menu" << endl;
                return;
            default:
                cout << "Sorry, not a feature yet, we're constantly improving" << endl;
                break;
        }
    }
}
