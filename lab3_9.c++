#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main() {
    int arr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Main: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i][3 - i] << " ";
    }
    cout << endl;



        
    return 0;
}
