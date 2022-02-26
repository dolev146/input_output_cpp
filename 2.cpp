// cin with strings
#include <iostream>
#include <string>
using namespace std;


int main()
{
    string mystr;
    cout << "Whats your name? ";
    getline (cin, mystr);
    cout << "hello " << mystr << ".\n";
    cout << "whats your favorite team ? ";
    getline (cin, mystr);
    cout << "I like " << mystr << " too! \n";
    return 0;

}
