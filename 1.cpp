
// stream description
// cin	standard input stream
// cout	standard output stream
// cerr	standard error (output) stream
// clog	standard logging (output) stream


// i/o example

#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << ".\n";
    return 0;
}
