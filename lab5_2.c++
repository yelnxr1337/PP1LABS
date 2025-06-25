#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    stack<char> charStack;

    cout << "Enter a string: ";
    cin >> input;
    for (char ch : input) {
        charStack.push(ch);
    }
    string reversed;
    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
