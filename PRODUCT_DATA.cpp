#include <iostream>
#include "product_data.h"

std::vector<Product> product_catalogue = {
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
    {12, "Microwave", 3, "Home & Kitchen", 99.99}
};

void show_categories_menu() {
    std::cout << "====All Categories Menu====" << std::endl;
    std::cout << "1. Electronics" << std::endl;
    std::cout << "2. Clothing" << std::endl;
    std::cout << "3. Home & Kitchen" << std::endl;
}