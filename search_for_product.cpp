#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int category;
    string category_name;
    double price;
    int amount = 100; // Default amount
};
int main() {
    cout <<"====All Categories Menu====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Home & Kitchen" << endl;
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

    cout<<"what product are you looking for?"<<endl;
    string search_name;
    cin>>search_name;
    for (auto& item : product_catalogue) {
        if (item.name == search_name) {
            cout 
                 << " | Name: " << item.name
                 << " | Category: " << item.category_name
                 << " | Price: $" << item.price
                 << " | Amount: " << item.amount
                 << endl;
                cout << "do you want to buy it? (1 for yes, 0 for no)" << endl;
                int buy_choice;
                cin >> buy_choice;
                if (buy_choice == 1) {
                    cout << "Thank you for your purchase!" << endl;
                    item.amount -= 1;
                } else {
                    cout << "Maybe next time!" << endl;
                }
        }
    }
   
    return 0;

}