#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int category;
    string category_name;
    double price;
};
void add_new_product() {
    cout <<"====All Categories Menu====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Home & Kitchen" << endl;
    vector<Product> product_catalogue = {
        {1, "Smartphone", 1, "Electronics", 699.99},
        {2, "Laptop", 1,"Electronics", 999.99},
        {3, "Tablet", 1,"Electronics", 499.99},
        {4, "Smartwatch", 1,"Electronics", 199.99},
        {5, "Jeans", 2,"Clothing", 49.99},
        {6, "T-Shirt", 2,"Clothing", 19.99},
        {7, "Shirt", 2,"Clothing", 14.99},
        {8, "Jacket", 2,"Clothing", 14.99},
        {9, "Blender", 3,"Home & Kitchen", 89.99},
        {10, "Cookware Set", 3,"Home & Kitchen", 129.99},
        {11, "Toaster", 3,"Home & Kitchen", 29.99},
        {12, "Microwave", 3,"Home & Kitchen", 99.99}
    };

    cout << "whats the name of new product?" << endl;
    string new_product_name;
    cin >> new_product_name;

    cout << "whats the category of new product?" << endl;
    int new_product_category;
    cin >> new_product_category;

    cout << "whats the price of new product?" << endl;
    double new_product_price;
    cin >> new_product_price;

    string new_product_category_name;
    if (new_product_category == 1) {
        new_product_category_name = "Electronics";
    } else if (new_product_category == 2) {
        new_product_category_name = "Clothing";
    } else if (new_product_category == 3) {
        new_product_category_name = "Home & Kitchen";
    }

    // Add the new product to the catalogue
    int new_product_id = product_catalogue.size() + 1;
    product_catalogue.push_back({new_product_id, new_product_name, new_product_category, new_product_category_name, new_product_price});

    

    cout << "New product added successfully!" << endl;

    for (const auto& item : product_catalogue) {
        cout << "ID: " << item.id
             << " | Name: " << item.name
             << " | Category Name: " << item.category_name
             << " | Price: $" << item.price
             << endl;
    }
}