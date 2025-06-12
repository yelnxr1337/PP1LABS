#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){
            int rate;
            cout<<"Please rate this code 1-10"<<endl;
            cin>>rate;
            switch(rate){
                case 1:
                cout<<"Is it so bad?";
                break;
                case 2:
                cout<<"We will try our best :(";
                break;
                case 3:
                cout<<"Hope you will like it soon...";
                break;
                case 4:
                cout<<"Almost 5...Ok thanks";
                break;
                case 5:
                cout<<"At least the half of the maximum!";
                break;
                case 6:
                cout<<"Quality of the code will increase! Thank you!";
                break;
                case 7:
                cout<<"Wow, we made a good job!";
                break;
                case 8:
                cout<<"Thank you for using this code!";
                break;
                case 9:
                cout<<"Hope you are really enjoying our code!";
                break;
                case 10:
                cout<<"This code is perfect for you? We appreciate that!!!";
                break;
            default:
            cout<<"Pleeeaasee, enter rate from 1 to 10 ;D";
            }


            

        


        return 0;
    }
