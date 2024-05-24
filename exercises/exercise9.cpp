// write a program that converts spelled-out numbers such as "zero" into digits, such as 0
// do this for values 1,2,3,4 and write out "not a number i know" if the user enters something
// that doesn't correspond

#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "\nPlease write out a number one through four:\n" << endl;
    string spelled_out_num;
    cin >> spelled_out_num;

    vector<string> spelled_nums = {"zero", "one", "two", "three", "four"};
    vector<int> nums = {0, 1, 2, 3, 4};
    
    if (!spelled_out_num.empty()) 
    {
        for (int i = 0; i <= spelled_nums.size(); i++)
        {
            if (spelled_out_num == spelled_nums[i])
            {
                cout << "\nThe number you entered is " << nums[i] << ".\n"<< endl;
                break;
            }
            if ( i == spelled_nums.size())
            {
                cout << "\nNot a number I know.\n" << endl;
            }
        }
    }
    
    return 0;
}