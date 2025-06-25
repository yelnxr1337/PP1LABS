#include <bits
using namespace std;

bool isBalanced(const string& expr) {
    stack<char> s;

    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                return false; // No matching '('
            }
            s.pop();
        }
    }

    return s.empty(); // True if all '(' have matching ')'
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression); // Reads full line including spaces

    if (isBalanced(expression)) {
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}
