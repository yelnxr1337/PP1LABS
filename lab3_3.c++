#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
    int evens=0;
    int odds=0;
    for(int j=0; j<n; j++){
        if(arr[j]%2==0){
            evens++;
        }
         }
         for(int k=0; k<n; k++){
             if(arr[k]%2!=0){
                odds++;
            }
         }
         cout<<"Even:"<<evens<<endl<<"Odd:"<<odds;


   





    return 0;
}
