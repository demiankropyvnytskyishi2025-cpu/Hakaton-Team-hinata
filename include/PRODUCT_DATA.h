#ifndef PRODUCT_DATA_H
#define PRODUCT_DATA_H

#include <vector>
#include <string>

// Структура товару
struct Product {
    int id;
    std::string name;
    int category;
    std::string category_name;
    double price;
    int amount = 100;
};

// Глобальний вектор товарів (оголошення)
extern std::vector<Product> product_catalogue;

// Функція для показу меню категорій
void show_categories_menu();

#endif