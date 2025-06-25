#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> myQueue;
    int num;

    cout << "Enqueue: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        myQueue.push(num);
    }
    cout << "Dequeued: ";
    while (!myQueue.empty()) {
        cout << myQueue.front() << " "; 
        myQueue.pop();
    }




    return 0;
}
