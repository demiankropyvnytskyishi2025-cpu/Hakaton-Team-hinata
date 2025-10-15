#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Product
{
    int id;
    string name;

    int category;
    string category_name;

    double price;
};

void count_the_total_number_of_products()
{
    cout << "====All Categories Menu====" << endl;
    cout << "1. Electronics" << endl;
    cout << "2. Clothing" << endl;
    cout << "3. Home & Kitchen" << endl;

    vector<Product> product_catalogue = {
        {1, "Smartphone", 1, "Electronics", 699.99},
        {2, "Laptop", 1, "Electronics", 999.99},
        {3, "Tablet", 1, "Electronics", 499.99},
        {4, "Smartwatch", 1, "Electronics", 199.99},
        {5, "Jeans", 2, "Clothing", 49.99},
        {6, "T-Shirt", 2, "Clothing", 19.99},
        {7, "Shirt", 2, "Clothing", 14.99},
        {8, "Jacket", 2, "Clothing", 14.99},
        {9, "Blender", 3, "Home & Kitchen", 89.99},
        {10, "Cookware Set", 3, "Home & Kitchen", 129.99},
        {11, "Toaster", 3, "Home & Kitchen", 29.99},
        {12, "Microwave", 3, "Home & Kitchen", 99.99}};

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
}
