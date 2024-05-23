// Write a program that prompts the user to enter three numbers
// then return those numbers in order from lowest to highest, separated by commas

#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Please enter three whole numbers:" << endl;

    int num;
    vector<int> v;

    for(int i = 0; i < 3; i++) {
        cin >> num;
        v.push_back(num);
    };

    vector<int> v2;

    if(v[0] < v[1] && v[0] < v[2])
    {
        v2.push_back(v[0]);
        if(v[1] < v[2]){
            v2.push_back(v[1]);
            v2.push_back(v[2]);
        } else 
        {
            v2.push_back(v[2]);
            v2.push_back(v[1]);
        }
    } else if (v[0] < v[1] || v[0] < v[2])
    {
        v2.push_back(v[0]);
        if(v[1] < v[2]){
            v2.push_back(v[2]);
            v2.insert(v2.begin(),v[1]);
        } else 
        {
            v2.push_back(v[1]);
            v2.insert(v2.begin(),v[2]);
        }

    } else 
    {
        v2.push_back(v[0]);
        if(v[1] < v[2]){
            v2.insert(v2.begin(),v[2]);
            v2.insert(v2.begin(),v[1]);
        } else 
        {
            v2.insert(v2.begin(),v[1]);
            v2.insert(v2.begin(),v[2]);
        }
    }
    
    cout << "\nThe three numbers in order from least to greatest is: " << endl;
    cout << v2[0] << ", " << v2[1] << ", " << v2[2] << "\n" << endl;

    return 0;
}