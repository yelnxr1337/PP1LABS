#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
        cout<<"Matrix A"<<endl;
        int arr[3][3];
        int arr1[3][3];
        int arrFinal[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
                   
        }
        }
        cout<<"Matrix B"<<endl;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr1[i][j];
                
            }
            
        }
        cout<<endl;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                arrFinal[i][j]=arr[i][j]+arr1[i][j];
                cout<<arrFinal[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return 0;
    
        }
       
