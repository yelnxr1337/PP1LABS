#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
        int arr[4][4];
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                cin>>arr[i][j];
            }
        }
        cout<<"Main: "<<arr[0][0]<<" "<<arr[1][1]<<" "<<arr[2][2]<<" "<<arr[3][3]<<endl;
        cout<<"Secondary: "<<arr[0][3]<<" "<<arr[1][2]<<" "<<arr[2][1]<<" "<<arr[3][0];
        
        
        return 0;
    
        }
