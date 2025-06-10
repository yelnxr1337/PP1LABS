#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
    float weight, height, BMI;
    cin>> weight >> height;
     BMI = (weight/height)/height;
    cout<<fixed<<setprecision(2);
    cout<<"Your BMI is"<<" "<<BMI;
  
  
    return 0;
}