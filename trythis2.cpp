#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Please enter a floating-point number value: " << endl;
    int n;
    cin >> n;
    cout << "n == " << n << endl
         << "n + 1 == " << n + 1 << endl
         << "three times n == " << n * 3 << endl
         << "twice n == " << n + n << endl
         << "n squared == " << n * n << endl
         << "half of n == " << n / 2 << endl
         << "square root of n == " << sqrt(n) << endl
         << "n modulo 2 == " << n%2 << endl;

    return 0;
}