#include <iostream>
#include <vector>
#include <string>
#include "PRODUCT_DATA.h"

using namespace std;

void discount_for_expensive_products() {
    for (int i = 0; i < product_catalogue.size(); i++) {
        if (product_catalogue[i].price > 1000.00) {
            product_catalogue[i].price *= 0.9; // Apply 10% discount
            cout << "ID: " << product_catalogue[i].id << ", Name: " << product_catalogue[i].name << ", New Price after discount 10%: " << product_catalogue[i].price << endl;
        }
    }
}