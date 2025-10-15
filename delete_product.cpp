#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Product {
    int id;
    string name;
    int category;
    string category_name;
    double price;
    int amount = 100; 
};

void delete_product() {
    vector<Product> product_catalogue = {
        {1, "Smartphone", 1, "Electronics", 699.99},
        {2, "Laptop", 1,"Electronics", 999.99},
        {3, "Tablet", 1,"Electronics", 499.99},
        {4, "Smartwatch", 1,"Electronics", 199.99},
        {5, "Jeans", 2,"Clothing", 49.99},
        {6, "T-Shirt", 2,"Clothing", 19.99},
        {7, "Shirt", 2,"Clothing", 14.99},
        {8, "Jacket", 2,"Clothing", 14.99},
        {9, "Blender", 3,"Home & Kitchen", 89.99},
        {10, "Cookware Set", 3,"Home & Kitchen", 129.99},
        {11, "Toaster", 3,"Home & Kitchen", 29.99},
        {12, "Microwave", 3,"Home & Kitchen", 99.99}
    };

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

