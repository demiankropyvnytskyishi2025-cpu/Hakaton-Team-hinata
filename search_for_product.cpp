#include <iostream>
using namespace std;

#include <vector>
#include <string>
#include "product_data.h"

void search_for_product() {
    cout<<"What product are you looking for?"<<endl;
    string search_name;
    cin >> search_name;

    for (auto& item : product_catalogue) {
        if (item.name == search_name) {
            cout 
                 << " | Name: " << item.name
                 << " | Category: " << item.category_name
                 << " | Price: $" << item.price
                 << " | Amount: " << item.amount
                 << "do you want to buy it? (1 for yes, 0 for no)"
                 << endl;

            int buy_choice;
            cin >> buy_choice;
            
            if (buy_choice == 1) {
                cout << "Thank you for your purchase!" << endl;
                item.amount -= 1;
            }
            else {
                cout << "Maybe next time!" << endl;
            }
        }
    }
}