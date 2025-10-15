#include <iostream>
using namespace std;

#include <vector>
#include <string>
#include "product_data.h"

void search_prod_more_than_1000() {
    int category_choice;
    cout << "Select a category (1-3): ";
    cin >> category_choice;

    for (int i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].category == category_choice) {
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", Price: $" << product_catalogue[i].price << endl;
        }
    }
}