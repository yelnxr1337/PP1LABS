#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n == 0) return 0; 
    else if (n == 1) return 1;   
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "write a num from 0 to 20" << endl;
    } else {
        cout << fibonacci(n) << endl;
    }

    return 0;
}
