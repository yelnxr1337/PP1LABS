#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
   int BornYear;
   cout<<"It is 'GEN Z' DETECTOR MACHINE."<< endl <<  "To check if you are GEN Z, write year you were born:"<<endl;
   cin>>BornYear;
   if(BornYear>=1997 && BornYear<=2013){
    cout<<"you ARE GEN Z";

   }
   else if(BornYear==1996 || BornYear==2014){
    cout<<"CLOSE, but not enough, you ARE NOT GEN Z";

   }
   else{
    cout<<"you ARE NOT GEN Z";
   }
        return 0;
    }
