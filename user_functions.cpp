#include <iostream>
#include <vector>
#include <string>

#include "product_data.h"
#include "user_interface.h"

using namespace std;

void buy_product() {
    string chosenName;
    cout << "What do you wanna buy?\nType name of the chosen product: " << endl;
    cin >> chosenName;

    bool found = false;

<<<<<<< HEAD
    for (std::size_t i = 0; i < product_catalogue.size(); ++i) {
=======
    for (int i = 0; i < product_catalogue.size(); ++i) {
>>>>>>> 89bf558c3a8048ad54f6473b7a88b7279077ad56
        if (product_catalogue[i].name == chosenName) {
            cout << "Incredible choice!" << endl;
            cout << "Buying product:\n"
                 << "ID: " << product_catalogue[i].id
                 << " | Name: " << product_catalogue[i].name
                 << " | Category: " << product_catalogue[i].category
                 << " | Price: $" << product_catalogue[i].price << endl;

            product_catalogue[i].amount--;
            found = true;
            cout << "Remaining amount: " << product_catalogue[i].amount << endl;
            if (product_catalogue[i].amount <= 0) {
                product_catalogue.erase(product_catalogue.begin() + i);
                cout << "Product is out of stock and has been removed from the catalogue." << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Sorry, we don't have this product." << endl;
    }
}
