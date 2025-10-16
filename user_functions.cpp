#include <iostream>
using namespace std;
#include <vector>
#include <string>

#include "product_data.h"
#include "user_interface.h"

void buy_product() {
    string chosenName;
    cout << "What do you wanna buy?\nType name of the chosen product: " << endl;
    cin >> chosenName;

    bool found = false;

    for (size_t i = 0; i < product_catalogue.size(); ++i) {
        if (product_catalogue[i].name == chosenName) {
            cout << "Чудовий вибір!" << endl;
            cout << "Deleting product:\n"
                 << "ID: " << product_catalogue[i].id
                 << " | Name: " << product_catalogue[i].name
                 << " | Category: " << product_catalogue[i].category
                 << " | Price: $" << product_catalogue[i].price << endl;

            product_catalogue.erase(product_catalogue.begin() + i);
            found = true;
            break;
        }
    }

    if (found) {
        int new_id = 1;
        for (auto& product : product_catalogue) {
            product.id = new_id++;
        }

        cout << "Updated catalogue: " << endl;
        for (const auto& product : product_catalogue) {
            cout << "ID: " << product.id
                 << " | Name: " << product.name
                 << " | Category: " << product.category
                 << " | Price: $" << product.price << endl;
        }
    } else {
        cout << "Product not found." << endl;
    }
    user_choice();
}
