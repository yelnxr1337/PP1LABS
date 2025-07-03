#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 12) {
        cout << "write a num from 0 to 12" << endl;
    } else {
        cout << factorial(n) << endl;
    }

    return 0;
}
