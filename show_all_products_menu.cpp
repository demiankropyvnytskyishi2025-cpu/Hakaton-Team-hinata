#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int category;
    double price;
};

int main() {
    cout <<"====All Categories Menu====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Home & Kitchen" << endl;
    vector<Product> product_catalogue = {
        {1, "Smartphone", 1, 699.99},
        {2, "Laptop", 1, 999.99},
        {3, "Tablet", 1, 499.99},
        {4, "Smartwatch", 1, 199.99},
        {5, "Jeans", 2, 49.99},
        {6, "T-Shirt", 2, 19.99},
        {7, "Shirt", 2, 14.99},
        {8, "Jacket", 2, 14.99},
        {9, "Blender", 3, 89.99},
        {10, "Cookware Set", 3, 129.99},
        {11, "Toaster", 3, 29.99},
        {12, "Microwave", 3, 99.99}
    };

    int category_choice;
    cout << "Select a category (1-3): ";
    cin >> category_choice;
    for (int i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].category == category_choice) {
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", Price: $" << product_catalogue[i].price << endl;
        }
    }
    return 0;
}