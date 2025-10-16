#include <iostream>
#include <string>

#include "product_data.h"
#include "admin_functions.h"
#include "common_functions.h"

// #include "show_all_products_menu.h"
// #include "search_for_product.h"
// #include "add_new_product.h"
// #include "change_price_of_product.h"
// #include "delete_product.h"
// #include "buy_product.h"
// #include "number_of_products.h"
// #include "products_less_than_100.h"
// #include "products_costing_more_than_1000.h"

using namespace std;

void admin_choice() {
    int choice;
    cout << "Choose an action: " << endl;
    cout << "1 - add a new product" << endl;
    cout << "2 - delete a product" << endl;
    cout << "3 - search for a product" << endl;
    cout << "4 - search for the most expensive product" << endl;
    cout << "5 - change the price a product" << endl;
    cout << "6 - count the number of products" << endl;
    cout << "7 - count the number of products costing less than 100" << endl;
    cout << "8 - do a discount for products costing more than 1000" << endl;
    cout << "9 - show all the products" << endl;

    do{
        cout << "Your choice: " << endl;
        cin >> choice;
    }while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7 && choice != 8 && choice != 9);
    if (choice == 1){
        cout << "You've chosen the option for adding the product" << endl;
        add_new_product();
    } else if(choice == 2){
        cout << "You've chosen the option for deleting the product" << endl;
        delete_product();
    } else if(choice == 3){
        cout << "You've chosen the option for searching the product" << endl;
        search_for_product();
    } else if(choice == 4){
        cout << "You've chosen the option for searching the most expensive product" << endl;
    } else if(choice == 5){
        cout << "You've chosen the option for changing the price of a product" << endl;
        change_price();
    } else if(choice == 6){
        cout << "You've chosen the option for counting the number of products" << endl;
        count_the_total_number_of_products();
    } else if(choice == 7){
        cout << "You've chosen the option for counting the number of products costing less than 100" << endl;
        discount_for_expensive_products();
    } else if(choice == 8){
        cout << "You've chosen the option for making a discount for products costing more than 1000" << endl;
        discount_for_expensive_products();
    } else if(choice == 9){
        cout << "You've chosen the option for showing all the products" << endl;
        show_all_products_menu();
    } else{
        cout << "Sorry, not a feature yet, we're constantly improving";
    }
}