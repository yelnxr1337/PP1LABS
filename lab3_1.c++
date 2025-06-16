#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
        int Sum=0;
        int n;
        cin>>n;
        int nums[n];

        for(int i=0; i<n; i++){
        cin>> nums[i];

        }
        for(int i=0; i<n; i++){
            Sum=Sum+nums[i];
        }
        cout<<"Sum="<<Sum;


        return 0;
    
        }
       