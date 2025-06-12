#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
        int code=1337;
        cout<<"It is HUMAN CHECKER code"<<endl<<" To pass it you must rewrite LETTER NUMBERS to NUMBERS"<<endl;  
        do{
            cout<<"Rewrite this #: ONE_THREE_THREE_SEVEN" << endl; 
            cin>>code;

            }while (code != 1337);

            cout<<"RIGHT, code is 1337, well done!";


        return 0;
    }
