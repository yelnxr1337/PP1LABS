#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int targetnumber;
        cin>>targetnumber;
        bool found = false;
        for(int i=0; i < n; i++){
            if(arr[i] == targetnumber){
                cout<<"Found at index"<<" "<<i;
                found = true;
                break;
            }
        }
        if (!found){
            cout<<"Not found";
        }


        return 0;
    
        }
       
