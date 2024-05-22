// read and compare two names

#include <iostream>

using namespace std;

int main() {
    cout << "Please enter two names:\n";
    string name1;
    string name2;
    cin >> name1 >> name2;

    if (name1 == name2)
    {
        cout << "That's the same name twice" << endl;
    }
    if (name1 < name2) 
    {
        cout << name1 << " is alphabetically before " << name2 << endl;
    }
    if (name1 > name2)
    {
        cout << name1 << " is alphabetically after " << name2 << endl;

    }

}