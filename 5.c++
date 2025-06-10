#include <iostream>
#include <iomanip>
using namespace std;
    int main(){
   double c;
   double f;
   cin>>c;
   cout<< fixed << setprecision(1);
   cout<<"Temperature in Fahrenheit:"<< (c*9/5)+32;
   
    return 0;
}