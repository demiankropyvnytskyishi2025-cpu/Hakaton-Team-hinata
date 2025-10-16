#include <iostream>
#include <vector>
#include <string>

#include "product_data.h"

using namespace std;

void count_the_total_number_of_products()
{
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