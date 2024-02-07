// FirstCProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <fstream>
#include <string>


int main() {

    double input_price;
    double sales_tax = 0.0625;
    double mark_up_percentage = 0.6;
    double final_price;

    std::cout << "Please input the price of your item: ";
    cin >> input_price;

    cout << "Your input price was:$" << input_price << endl;
    final_price = (input_price + (input_price * mark_up_percentage)) * sales_tax + input_price;
    cout << "The mark up percentage is:$" << (mark_up_percentage * 100) << "%" << endl;
    cout << "The sales tax is:" << (sales_tax * 100) << "%" << endl;
    cout << "The final price is:$" << final_price << endl;
    return 0;
}

