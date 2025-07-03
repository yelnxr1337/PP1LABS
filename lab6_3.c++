#include <iostream>
using namespace std;

string reverseString(string str) {
    if (str.length() <= 1) {
        return str;
        
    } else {
       
        return reverseString(str.substr(1)) + str[0];
    }
}

int main() {
    string input;
    cin >> input;

    if (input.length() > 50) {
        cout << "write a string from 1 to 50 elements" << endl;
    } else {
        string reversed = reverseString(input);
        cout << reversed;
    }

    return 0;
}
