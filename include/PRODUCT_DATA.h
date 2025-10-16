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
void show_all_products_menu();
void search_for_product();
void max_value_product();
void discount_for_expensive_products();

void count_the_number_of_products_cheaper_than_100();
void buy_product();

void add_new_product();
void delete_product();
void change_price();
void count_the_total_number_of_products();

#endif