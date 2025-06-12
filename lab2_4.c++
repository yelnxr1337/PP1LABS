#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
        cout<<"NEW YEAR WILL COME ONLY IF THE NUMBERS WHICH CAN BE DIVIDED TO 3 AND 13 WILL DELETED FROM (1-100)"<<endl;
        for(int i=1 ; i<=100 ; i++){
        if(i % 13 == 0 || i % 3 == 0){
            continue;
        }
            cout<<i<<endl;
        }
        cout<<"HAPPY NEW YEAR, THANKS FOR DELETING 3S AND 13S!";

        return 0;
    }
