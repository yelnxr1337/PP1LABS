#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int max=nums[0];
        int min=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] < min) min=nums[i];
            if(nums[i] > max) max=nums[i];
        }
        cout<<"min="<<min<<endl<<"max="<<max;






    return 0;
}
