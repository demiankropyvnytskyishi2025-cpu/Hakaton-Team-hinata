#include <iostream>
using namespace std;
#include "product_data.h"

vector<Product> product_catalogue = {
    {1, "Smartphone", "Electronics", 1099.99},
    {2, "Laptop", "Electronics", 1199.99},
    {3, "Tablet", "Electronics", 499.99},
    {4, "Smartwatch", "Electronics", 199.99},
    {5, "Jeans", "Clothing", 49.99},
    {6, "T-Shirt", "Clothing", 19.99},
    {7, "Shirt", "Clothing", 14.99},
    {8, "Jacket", "Clothing", 14.99},
    {9, "Blender", "Home & Kitchen", 89.99},
    {10, "Cookware Set", "Home & Kitchen", 129.99},
    {11, "Toaster", "Home & Kitchen", 29.99},
    {12, "Microwave", "Home & Kitchen", 99.99}
};

void show_categories_menu() {
    cout << "====All Categories Menu====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Home & Kitchen" << endl;
}
