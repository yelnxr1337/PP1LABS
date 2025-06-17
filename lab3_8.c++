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
        cout<<endl;
        }
            int maxSum=-1;
            int maxRow=0;
        for(int i=0; i<4; i++){
            int rowSum=0;
            for(int j=0; j<4; j++){
                rowSum+=arr[i][j];
            }
        if (rowSum>maxSum){
            maxSum=rowSum;
            maxRow=i;
        }
        }
        cout<<"Row"<<" "<<(maxRow+1)<< " has the maximum sum:"<<" "<<maxSum;

        
        
        
        
        return 0;
    
        }
