#include <iostream>
#include <vector>
#include <string>
#include "PRODUCT_DATA.h"

using namespace std;

void count_the_number_of_products_cheaper_than_100()
{
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