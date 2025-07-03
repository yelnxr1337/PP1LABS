#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers:";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int value;
    cout << "Enter the value to count:";
    cin >> value;


    int freq = count(arr.begin(), arr.end(), value);


    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    cout << "Count of" << value << ": " << freq << endl;
    cout << "Min:" << minVal << endl;
    cout << "Max:" << maxVal << endl;

    return 0;
}

