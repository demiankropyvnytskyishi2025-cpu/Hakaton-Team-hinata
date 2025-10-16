#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "product_data.h"

using namespace std;

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
}
