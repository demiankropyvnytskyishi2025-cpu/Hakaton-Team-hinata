#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>

#include "product_data.h"
#include "admin_interface.h"

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
    admin_choice();
}

void delete_product() {
    while (true) {
        cout << "\n==== Product Catalogue ====" << endl;
        for (const auto& item : product_catalogue) {
            cout << item.name << " | " << item.category_name << " | $" << item.price << endl;
        }

        cout << "\nEnter the name of the product to delete (or type 'exit' to stop):" << endl;
        string name_delete;
        cin >> ws; 
        getline(cin, name_delete);

        if (name_delete == "exit") break;

        auto it = find_if(product_catalogue.begin(), product_catalogue.end(),
                          [&name_delete](const Product& p) { return p.name == name_delete; });

        if (it != product_catalogue.end()) {
            cout << "Product found: " 
                 << it->name << " | " 
                 << it->category_name << " | $" 
                 << it->price << endl;

            cout << "Do you want to delete this product? (yes/no)" << endl;
            string delete_choice;
            getline(cin, delete_choice);

            if (delete_choice == "yes" || delete_choice == "1") {
                product_catalogue.erase(it);
                cout << "Product deleted successfully!" << endl;
            } else {
                cout << "No changes made." << endl;
            }
        } else {
            cout << "Product not found in the catalogue." << endl;
        }

        if (product_catalogue.empty()) {
            cout << "Catalogue is empty. Exiting." << endl;
            break;
        }
    }
    admin_choice();
}

void change_price() {
    cout << "What's the name of the product whose price you want to change?" << endl;
    string name_change_price;
    cin >> name_change_price;

    bool found = false;

    for (auto& item : product_catalogue) {
        if (item.name == name_change_price) {
            found = true;
            cout 
                 << " | Name: " << item.name
                 << " | Category: " << item.category_name
                 << " | Price: $" << item.price
                 << " | Amount: " << item.amount
                 << "\nDo you want to change its price? (1 for yes, 0 for no)"
                 << endl;

            int change_choice;
            cin >> change_choice;

            if (change_choice == 1) {
                cout << "What's the new price?" << endl;
                double new_price;
                cin >> new_price;
                item.price = new_price;
                cout << "Price updated successfully!" << endl;
            } else if (change_choice == 0) {
                cout << "No changes made." << endl;
            } else {
                cout << "Invalid choice." << endl;
            }
            break; // Exit loop after finding the product
        }
    }

    if (!found) {
        cout << "Product not found in the catalogue." << endl;
    }
    admin_choice();
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
        cout << "Enter the category number: ";
        cin >> cat_number;

        int count = 0;

        for (auto &n : product_catalogue)
        {
            if (n.category == cat_number)
            {
                count++;
            }
        }
        cout << "The number of products in the category = " << count << endl;
    }
    else if (choice == 2)
    {
        cout << "The total number of products in the store = " << product_catalogue.size() << endl;
    }
    else
    {
        cout << "Error! Invalid option.";
    }
    admin_choice();
}