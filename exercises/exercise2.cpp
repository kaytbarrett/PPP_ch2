// write a program that converts miles to kilometers. 
// your program should have a reasonable prompt for the user to enter a numner of miles
// hint: a mile is 1.609 kilometers

#include <iostream> 

using namespace std;

int main() 
{
    cout << "Please enter in the number of miles you want converted to kilometers:\n";
    double mi;
    cin >> mi;
    double km = mi * 1.609;
    cout << mi << " miles is " << km << " kilometers\n";


    return 0; 
}