// Write a program that prompts the user to enter some number of pennies
// nickels, dimes, quarters, half-dollars, and dollar coins. 
// Query the user for the number of each coin size separately, then at the end print out
// the values for each coin, as well as the total value amount. 

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> coins = {"pennies", "nickels", "dimes", "quarters", "half-dollars", "dollar coins"};
    vector<int> coinAmount;

    for (int i = 0; i < coins.size(); i++)
    {
        cout << "How many " << coins[i] << " do you have?" << endl;
        int amount;
        cin >> amount;
        coinAmount.push_back(amount);
    }

    cout<< "\n";

    for (int i = 0; i < coins.size(); i++)
    {
        cout << "You have " << coinAmount[i] << " " << coins[i] << "."<< endl;
    }
    
    int pennyTotal = coinAmount[0] * 1;
    int nickelTotal = coinAmount[1] * 5;
    int dimeTotal = coinAmount[2] * 10;
    int quarterTotal = coinAmount[3] * 25;
    int halfDollarTotal = coinAmount[4] * 50;
    int dollarCoinTotal = coinAmount[5] * 100;

    int totalValue = pennyTotal + nickelTotal + dimeTotal + quarterTotal + halfDollarTotal + dollarCoinTotal;

    cout << "Your total value is " << totalValue << " cents.\n" << endl;

    return 0;
}