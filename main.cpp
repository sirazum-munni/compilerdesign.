#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isNumeric = true;

    for (char c : input) {
        if (!isdigit(c)) { // check if any character is not a digit
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}
