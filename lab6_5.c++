#include <iostream>
using namespace std;


int power(int a, int b) {
    if (b == 0) {
        return 1; 
        
    } else {
        return a * power(a, b - 1); 
    }
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if (a < 0 || a > 10 || b < 0 || b > 10) {
        cout << "write nums from 0 to 10" << endl;
  
    } else {
   
        int result = power(a, b);
        cout << result << endl;
    }

    return 0;
}
