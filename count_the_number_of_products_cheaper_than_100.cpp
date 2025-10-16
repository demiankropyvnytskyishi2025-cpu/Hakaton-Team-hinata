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

void count_the_number_of_products_cheaper_than_100()
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
    cout << "Would you like to see the number of products cheaper than 100 UAH?\n"
            "1. Yes\n"
            "2. No\n"
            "Enter the option number: "
         << endl;
    int option;
    cin >> option;
    int cheap_count = 0;

    if (option == 1)
    {
        for (const auto &item : product_catalogue)
        {
            if (item.price < 100)
            {
                cheap_count++;
            }
        }
        cout << "Number of products cheaper than 100 UAH: " << cheap_count << endl;
    }
    if (option != 2 && option != 1)
    {
        cout << "Error! Invalid option.";
    }
}
