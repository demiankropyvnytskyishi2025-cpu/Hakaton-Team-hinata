#ifndef PRODUCT_DATA_H
#define PRODUCT_DATA_H

#include <vector>
#include <string>

struct Product {
    int id;
    std::string name;
    int category;
    std::string category_name;
    double price;
    int amount = 100;
};

// Оголошення глобального вектора
extern std::vector<Product> product_catalogue;

void show_categories_menu();

#endif