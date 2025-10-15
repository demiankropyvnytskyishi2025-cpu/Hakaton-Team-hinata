#include <iostream>
#include <string>
#include "product_data.h"
#include "search_for_product.h"

using namespace std;

void user_choice() {
    int choice;
    cout << "You're in user interface \nChoose an option: " << endl;
    cout << "1 - search for a product";
    do{
        cin >> choice;
    }while(choice != 1 && choice != 2 && choice != 3);
    if (choice == 1){
        cout << "You've chosen the option for searching the product";
        search_for_product();
    } else {
        cout << "Sorry, not a feature yet, we're constantly improving";
    }
}