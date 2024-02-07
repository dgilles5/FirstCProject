// FirstCProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <string>


int main() {
    //Creating 4 double variables to keep track of the inputed price, the sales tax, the markup percentage, and the final price.
    double input_price;
    double sales_tax = 0.0525;
    double mark_up_percentage = 0.6;
    double final_price;

    //Asking the user for an inputed price.
    std::cout << "Please input the price of your item: ";
    cin >> input_price;

    //Creates the double markup_price which is the input_price * the percentage + the initial price
    double markup_price = (input_price * mark_up_percentage) + input_price;

    //Calculates the final price of the item
    final_price = markup_price * sales_tax + markup_price;
    /*
    *Outputs the info in this format
    * Input Price:
    * Mark Up Percentage:
    * Sales Tax:
    * Final Price:
    */
    cout << "Your input price was: $" << input_price << endl;
    cout << "The mark up percentage is: " << (mark_up_percentage * 100) << "%" << endl;
    cout << "The sales tax is: " << (sales_tax * 100) << "%" << endl;
    cout << "The final price is: $" << fixed << setprecision(2) << showpoint << final_price << endl;
    return 0;
}

