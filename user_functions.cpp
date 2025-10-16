#include <iostream>
using namespace std;
#include <vector>
#include <string>

#include "product_data.h"

void count_the_number_of_products_cheaper_than_100() {
    for (size_t i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price > 1000.00) {
            product_catalogue[i].price *= 0.9; // Apply 10% discount
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", New Price after discount 10%: " << product_catalogue[i].price << endl;
        }
    }
}

void buy_product() {
    cout << "What product do you want to buy?" << endl;
    string new_product_name;
    cin >> new_product_name;

    int product_id_after_buying = product_catalogue.size() - 1;
    cout << "New product added successfully!" << endl;

    for (const auto& item : product_catalogue) {
        cout << "ID: " << item.id
             << " | Name: " << item.name
             << " | Category Name: " << item.category_name
             << " | Price: $" << item.price
             << endl;
    }
}