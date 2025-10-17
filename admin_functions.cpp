#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>

#include "product_data.h"
#include "admin_interface.h"

using namespace std;

void add_new_product() {
    cout << "What's the name of the new product?" << endl;
    string new_product_name;
    cin >> new_product_name;
    double new_product_price;

    cout << "What's the price of the new product?" << endl;
    cin >> new_product_price;
    

    string new_product_category_name;
    int new_product_category;
    do {
        cout << "What's the category name of the new product?" << endl;
        cin >> new_product_category_name;
        if (new_product_category_name == "Electronics") {
            new_product_category = 1;
        } else if (new_product_category_name == "Clothing") {
            new_product_category = 2;
        } else if (new_product_category_name == "Home & Kitchen") {
            new_product_category = 3;
        } else {
            cout << "Invalid category. Product not added." << endl;
        }
    } while (new_product_category_name != "Electronics" && new_product_category_name != "Clothing" && new_product_category_name != "Home & Kitchen");
    int new_product_id = product_catalogue.size() + 1;
    product_catalogue.push_back({
        new_product_id,
        new_product_name,
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

void delete_product() {
    string chosenName;
    cout << "What product do you want to delete?\nType name of the chosen product: " << endl;
    cin >> chosenName;

    bool found = false;

    for (size_t i = 0; i < product_catalogue.size(); ++i) {
        if (product_catalogue[i].name == chosenName) {
            cout << "Чудовий вибір!" << endl;
            cout << "Deleting product:\n"
                 << "ID: " << product_catalogue[i].id
                 << " | Name: " << product_catalogue[i].name
                 << " | Category: " << product_catalogue[i].category_name
                 << " | Price: $" << product_catalogue[i].price << endl;

            product_catalogue.erase(product_catalogue.begin() + i);
            found = true;
            break;
        }
    }

    if (found) {
        int new_id = 1;
        for (size_t i = 0; i < product_catalogue.size(); ++i) {
            product_catalogue[i].id = new_id++;
        }

        cout << "Updated catalogue: " << endl;
        for (size_t i = 0; i < product_catalogue.size(); ++i) {
            cout << "ID: " << product_catalogue[i].id
                 << " | Name: " << product_catalogue[i].name
                 << " | Category: " << product_catalogue[i].category_name
                 << " | Price: $" << product_catalogue[i].price << endl;
        }
    } else {
        cout << "Product not found." << endl;
    }
}

void change_price() {
    cout << "What's the name of the product whose price you want to change?" << endl;
    string name_change_price;
    cin >> name_change_price;

    bool found = false;

    for (size_t i = 0; i < product_catalogue.size(); ++i) {
        if (product_catalogue[i].name == name_change_price) {
            found = true;
            cout 
                 << " | Name: " << product_catalogue[i].name
                 << " | Category: " << product_catalogue[i].category_name
                 << " | Price: $" << product_catalogue[i].price
                 << " | Amount: " << product_catalogue[i].amount
                 << "\nDo you want to change its price? (1 for yes, 0 for no)"
                 << endl;

            int change_choice;
            cin >> change_choice;

            if (change_choice == 1) {
                cout << "Enter the new price: " << endl;
                double new_price;
                cin >> new_price;
                product_catalogue[i].price = new_price;
                cout << "Price updated successfully!" << endl;
            } else if (change_choice == 0) {
                cout << "No changes made." << endl;
            } else {
                cout << "Invalid choice." << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Product not found in the catalogue." << endl;
    }
}

void count_the_total_number_of_products() {
    cout << "What would you like to do?" << endl;
    cout << "1. See the number of products in a specific category" << endl;
    cout << "2. See the total number of products in the store" << endl;
    cout << "Enter the option number: ";
    int choice;
    cin >> choice;

    int cat_number;

    if (choice == 1)
    {
        cout << "Enter the category name: ";
        string cat_name;
        cin >> cat_name;
    

        int count = 0;

        for (size_t i = 0; i < product_catalogue.size(); ++i)
        {
            if (product_catalogue[i].category_name == cat_name)
            {
                count++;
            }
        }
        cout << "The number of products in the category: " << count << endl;
    }
    else if (choice == 2)
    {
        cout << "The total number of products in the store: " << product_catalogue.size() << endl;
    }
    else
    {
        cout << "Error! Invalid option." << endl;
    }
}
