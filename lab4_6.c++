#include <bits/stdc++.h>
using namespace std;
double average(const vector<int>& v) {
    if (v.empty()) return 0.0;

    int sum = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }

    return static_cast<double>(sum) / v.size();
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    double result = average(numbers);

    cout << "Average: " << result << endl;

    return 0;
}
