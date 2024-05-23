#include <iostream> 

using namespace std;

int main() {
    cout << "Please enter a whole number:" << endl;
    int num;
    cin >> num;

    if (num%2 == 1) 
    {
        cout << "\nThe number " << num << " is an odd number.\n" << endl;
    } else 
    {
        cout << "\nThe number " << num << " is an even number.\n" << endl;
    }

    return 0;
}