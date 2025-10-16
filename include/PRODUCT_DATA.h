#ifndef PRODUCT_DATA_H
#define PRODUCT_DATA_H

struct Product {
    int id;
    std::string name;
    
    std::string category_name;
    double price;
    int amount = 3;
};

extern std::vector<Product> product_catalogue;
void show_categories_menu();

#endif