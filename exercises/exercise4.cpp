// write a program that prompts the user to enter two integer values
// store these values in int variables named val1 and val2 
// write your program to determine the smaller, larger, sum, 
// difference, product, and ratio of these values and report them to the user

#include <iostream>

using namespace std;

int main() {

    cout << "Please enter two whole numbers:\n";
    int val1;
    int val2;
    cin >> val1 >> val2;
    if (val1 < val2)
    {
        cout << "\nThe smaller number is: " << val1 << endl;
        cout << "The larger number is: " << val2 << endl;
    } else 
    {
        cout << "\nThe smaller number is: " << val2 << endl;
        cout << "The larger number is: " << val1 << endl;
    }

    double float_val = val1;
    double difference = float_val/val2;

    cout << "The sum of these numbers is: " << val1 + val2 << endl;
    cout << "The difference of these numbers is: " << difference << endl;
    cout << "The product of these numbers is: " << val1*val2 << endl;
    cout << "The ratio of these numbers is: " << val1 << ":" << val2 << "\n" << endl;


    return 0;

}