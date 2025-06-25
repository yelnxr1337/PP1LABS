#include <bits/stdc++.h>
using namespace std;

bool isBalanced(const string& expr) {
    stack<char> s;

    for (char ch : expr) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                return false; 
            }
            s.pop();
        }
    }

    return s.empty(); 
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    getline(cin, expression); 

    if (isBalanced(expression)) {
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}
