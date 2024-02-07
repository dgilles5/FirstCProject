// FirstCProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <string>


int main() {

    double input_price;
    double sales_tax = 0.0525;
    double mark_up_percentage = 0.6;
    double final_price;

    std::cout << "Please input the price of your item: ";
    cin >> input_price;
    double markup_price = (input_price * mark_up_percentage) + input_price;

    cout << "Your input price was: $" << input_price << endl;
    final_price = markup_price * sales_tax + markup_price;
    cout << "The mark up percentage is: " << (mark_up_percentage * 100) << "%" << endl;
    cout << "The sales tax is: " << (sales_tax * 100) << "%" << endl;
    cout << "The final price is: $" << fixed << setprecision(2) << showpoint << final_price << endl;
    return 0;
}

