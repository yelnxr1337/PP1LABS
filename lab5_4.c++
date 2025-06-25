#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> ticketQueue;
    string name;
    cout << "Enter 3 names: ";
    for (int i = 0; i < 3; ++i) {
        cin >> name;
        ticketQueue.push(name); 
    }
    while (!ticketQueue.empty()) {
        cout << "Serving: " << ticketQueue.front() << endl;
        ticketQueue.pop(); 
    }

    return 0;
}
