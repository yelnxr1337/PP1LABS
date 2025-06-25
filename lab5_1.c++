#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> myStack;
    int num;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        myStack.push(num);  
    }

    cout << "Stack (Top to Bottom): ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";  
        myStack.pop(); 
    }

    return 0;
}
