#include <iostream>
#include <string>
#include "product_data.h"

using namespace std;

void add_new_product() {
    cout << "What's the name of the new product?" << endl;
    string new_product_name;
    cin >> new_product_name;

    cout << "What's the category of the new product?" << endl;
    int new_product_category;
    cin >> new_product_category;

    cout << "What's the price of the new product?" << endl;
    double new_product_price;
    cin >> new_product_price;

    string new_product_category_name;
    if (new_product_category == 1) {
        new_product_category_name = "Electronics";
    } else if (new_product_category == 2) {
        new_product_category_name = "Clothing";
    } else if (new_product_category == 3) {
        new_product_category_name = "Home & Kitchen";
    } else {
        cout << "Invalid category. Product not added." << endl;
        return;
    }

    int new_product_id = product_catalogue.size() + 1;
    product_catalogue.push_back({
        new_product_id,
        new_product_name,
        new_product_category,
        new_product_category_name,
        new_product_price
    });

    cout << "New product added successfully!" << endl;

    for (const auto& item : product_catalogue) {
        cout << "ID: " << item.id
             << " | Name: " << item.name
             << " | Category Name: " << item.category_name
             << " | Price: $" << item.price
             << endl;
    }
}