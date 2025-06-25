#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    deque<char> d;
    cout << "Enter a word: ";
    cin >> word;
    for (char ch : word) {
        d.push_back(ch);
    }

    bool isPalindrome = true;
    while (d.size() > 1) {
        if (d.front() != d.back()) {
            isPalindrome = false;
            break;
        }
        d.pop_front();
        d.pop_back();
    }
    if (isPalindrome) {
        cout << " It is a palindrome." << endl;
    } else {
        cout << " It is not a palindrome." << endl;
    }

    return 0;
}
