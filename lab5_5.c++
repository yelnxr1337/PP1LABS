#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d;
    d.push_front(10);  
    d.push_back(20);  
    d.push_front(5);
    cout << "Deque contains: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Pop back: " << d.back() << endl;
    d.pop_back();

    cout << "Pop front: " << d.front() << endl;
    d.pop_front();


    cout << "Remaining: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
