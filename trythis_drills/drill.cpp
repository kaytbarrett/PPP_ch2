#include <iostream>

using namespace std;

inline void simple_error(string s)	// write ``error: s'' and exit program (for non-exception terminating error handling)
	{
		cerr << "error: " << s << '\n';
		exit(1);
	}

int main() {

    cout << "Enter the name of the person you want to write to:" << endl;
    string name;
    cin >> name; 
    cout << "\n\nDear " << name << ",\n" 
         << "   How are you? I am doing well, I miss you!\n" << endl;
    string friend_name;
    cout << "Please enter a friend's name: " << endl;
    cin >> friend_name;
    cout << "\n\nHave you seen " << friend_name << " recently?\n" << endl;
    cout << "Please enter the age of the person you are sending this to: " << endl;
    int age;
    cin >> age; 
    if (age < 0 || age > 110)
    {
        simple_error("You're kidding!");
    } else 
    {
        cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
    }

    if (age <= 12 && age > 0 )
    {
        cout << "Next year you will be " << age + 1 << "." << endl;
    }

    if( age == 17 )
    {
        cout << "Next year you will be able to vote!" << endl;
    }

    if( age > 70 && age < 110 ) 
    {
        cout << "Are you retired?" << endl;
    }

    cout << "\nYours sincerely,\n\nKatie" << endl;
    


    return 0;
}