#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
      int arr[3][3];
      for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
      }
      for(int i=0; i<3; i++){
       cout<<endl;
        for(int j=0; j<3; j++){
            cout<<arr[j][i]<<" ";
        }
      }
 





        return 0;
    
        }
