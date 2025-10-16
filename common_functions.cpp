#include <iostream>
using namespace std;
#include <vector>
#include <string>

#include "product_data.h"
#include "admin_interface.h"
#include "user_interface.h"
#include "main.h"
#include "session_state.h"

void show_all_products_menu() {
    string category_choice;
    cout << "====All Categories Menu====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Home & Kitchen" << endl;
    cout << "Select a category: ";
    cin >> category_choice;

    for (int i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].category_name == category_choice) {
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", Price: $" << product_catalogue[i].price << endl;
        }
    }
    if (is_admin) admin_choice();
    else user_choice();
}

void search_for_product() {
    cout<<"What product are you looking for?"<<endl;
    string search_name;
    cin >> search_name;

    for (int i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].name == search_name) {
            cout 
                 << " | Name: " << product_catalogue[i].name
                 << " | Category: " << product_catalogue[i].category_name
                 << " | Price: $" << product_catalogue[i].price
                 << " | Amount: " << product_catalogue[i].amount
                 << "do you want to buy it? (1 for yes, 0 for no)"
                 << endl;

            int buy_choice;
            cin >> buy_choice;
            
        if (buy_choice == 1) {
            cout << "Thank you for your purchase!" << endl;
            product_catalogue[i].amount -= 1;
        }
        else if (buy_choice == 0) {
            cout << "Maybe next time!" << endl;            
    
        }
        else {
            cout << "Invalid choice." << endl;
        }
    }
    if (is_admin) admin_choice();
    else user_choice();
    }
}

void max_value_product() {
    if (product_catalogue.empty()) {
        cout << "Catalogue is empty." << endl;
        return;
    }
    string maxName = product_catalogue[0].name;
    double maxValue = product_catalogue[0].price;
    for (int i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price > maxValue) {
            maxValue = product_catalogue[i].price;
            maxName = product_catalogue[i].name;
        }
    }

    cout << "The biggest value is: " << maxName << " - " << maxValue << std::endl;
    if (is_admin) admin_choice();
    else user_choice();
}

void discount_for_expensive_products() {
    for (size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price > 1000.00) {
            product_catalogue[i].price *= 0.9;
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", New Price after discount 10%: " << product_catalogue[i].price << endl;
        }
    }
    if (is_admin) admin_choice();
    else user_choice();
}

void count_the_number_of_products_cheaper_than_100() {
    int count = 0;
    for (size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price < 100.00) {
            count++;
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", Price: " << product_catalogue[i].price << endl;
        }
    }
    cout << "Total products cheaper than $100: " << count << endl;
    if (is_admin) admin_choice();
    else user_choice();
}
