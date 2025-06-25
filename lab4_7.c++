#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i <= 20; ++i) {
        v.push_back(i);
    }
    reverse(v.begin(), v.end());
    int evenCount = count_if(v.begin(), v.end(), [](int x) {
        return x % 2 == 0;
    });
    v.erase(remove_if(v.begin(), v.end(), [](int x) {
        return x % 3 == 0;
    }), v.end());
    cout << "Even numbers count: " << evenCount << endl;

    cout << "Vector after removing numbers divisible by 3:\n";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
