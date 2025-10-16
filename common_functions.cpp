#include <iostream>
#include <vector>
#include <string>

#include "product_data.h"
#include "admin_interface.h"
#include "user_interface.h"
#include "main.h"

using namespace std;

void show_all_products_menu() {
    int category_choice;
    cout << "Select a category (1-3): ";
    cin >> category_choice;

    for (std::size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].category == category_choice) {
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", Price: $" << product_catalogue[i].price << endl;
        }
    }
}

void search_for_product() {
    cout << "What product are you looking for?" << endl;
    string search_name;
    cin >> search_name;

    for (auto& item : product_catalogue) {
        if (item.name == search_name) {
            cout 
                 << " | Name: " << item.name
                 << " | Category: " << item.category_name
                 << " | Price: $" << item.price
                 << " | Amount: " << item.amount
                 << "do you want to buy it? (1 for yes, 0 for no)"
                 << endl;

            int buy_choice;
            cin >> buy_choice;
            
            if (buy_choice == 1) {
                cout << "Thank you for your purchase!" << endl;
                item.amount -= 1;
            }
            else {
                cout << "Maybe next time!" << endl;
            }
        }
    }
}

void max_value_product() {
    if (product_catalogue.empty()) {
        cout << "Catalogue is empty." << endl;
        return;
    }

    double maxValue = 0;
    for (std::size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price > maxValue) {
            maxValue = product_catalogue[i].price;
        }
    }

    cout << "The biggest value is: " << maxValue << endl;
}

void discount_for_expensive_products() {
    for (std::size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price > 1000.00) {
            product_catalogue[i].price *= 0.9;
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", New Price after discount 10%: " << product_catalogue[i].price << endl;
        }
    }
}

void count_the_number_of_products_cheaper_than_100() {
    int count = 0;
    for (std::size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price < 100.00) {
            count++;
        }
    }

    cout << "Number of products cheaper than 100: " << count << endl;
}
