#include <iostream>

using namespace std;

int main() 
{
    string current;
    string previous;

    while (cin>>current )
    {
        if (previous == current)
        {
            cout<<"repeated word: "<< current << endl;
        }
        previous = current;

    }

    return 0;
}