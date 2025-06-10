#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
   float a,b,c,d; // Мы должны использовать флоат или дабл, потому что среднее значение трех чисел может не ровно делится на 3, например 10 19 2 / 3 выйдет 10.3333 
   cin>>a>>b>>c;
   d=(a+b+c)/3;
   cout<<"The average is"<<" "<< d;
   
  
  
    return 0;
}