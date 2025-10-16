#include <iostream>
#include <string>

#include "product_data.h"

#include "buy_product.h"
#include "search_for_product.h"
//expensive
#include "products_less_than_100.h"
#include "products_costing_more_than_1000.h"
#include "show_all_products_menu.h"

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

    do{
        cout << "Your choice: " << endl;
        cin >> choice;
    }while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6);
    if (choice == 1){
        cout << "You've chosen the option for buying the product" << endl;
        buy_product();
    } else if(choice == 2){
        cout << "You've chosen the option for searching the product" << endl;
        search_for_product();
    } else if(choice == 3){
        cout << "You've chosen the option for searching the most expensive product" << endl;
        //
    } else if(choice == 4){
        cout << "You've chosen the option for counting the number of products costing less than 100" << endl;
        count_the_number_of_products_cheaper_than_100();
    } else if(choice == 5){
        cout << "You've chosen the option for making a discount for products costing more than 1000" << endl;
        discount_for_expensive_products();
    } else if(choice == 6){
        cout << "You've chosen the option for showing all the products" << endl;
        show_all_products_menu();
    } else{
        cout << "Sorry, not a feature yet, we're constantly improving";
    }
}