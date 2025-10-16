#include <iostream>
#include <string>

#include "user_functions.h"
#include "common_functions.h"
#include "main.h"

using namespace std;

void user_choice() {
    int choice;

    cout << "Choose an action: " << endl;
    cout << "1 - buy a product" << endl;
    cout << "2 - search for a product" << endl;
    cout << "3 - search for the most expensive product" << endl;
    cout << "4 - count the number of products costing less than 100" << endl;
    cout << "5 - do a discount for products costing more than 1000" << endl;
    cout << "6 - show all the products" << endl;
    cout << "7 - exit to menu" << endl;

    do {
        cout << "Your choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 7);

    switch (choice) {
        case 1:
            cout << "You've chosen the option for buying the product" << endl;
            buy_product();
            break;
        case 2:
            cout << "You've chosen the option for searching the product" << endl;
            search_for_product();
            break;
        case 3:
            cout << "You've chosen the option for searching the most expensive product" << endl;
            max_value_product();
            break;
        case 4:
            cout << "You've chosen the option for counting the number of products costing less than 100" << endl;
            count_the_number_of_products_cheaper_than_100();
            break;
        case 5:
            cout << "You've chosen the option for making a discount for products costing more than 1000" << endl;
            discount_for_expensive_products();
            break;
        case 6:
            cout << "You've chosen the option for showing all the products" << endl;
            show_all_products_menu();
            break;
        case 7:
            cout << "You've chosen exiting to the menu" << endl;
            main();
            break;
        default:
            cout << "Sorry, not a feature yet, we're constantly improving" << endl;
            break;
    }
}