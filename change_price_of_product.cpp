#include <iostream>
#include <vector>
#include <string>
#include "product_data.h"

using namespace std;

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
}