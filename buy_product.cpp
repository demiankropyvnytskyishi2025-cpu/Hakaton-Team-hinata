#include <iostream>
#include <string>
#include "product_data.h"

using namespace std;

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