#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
    int main(){

        int found=0;

        string writename,Names[3][3] = {
            {"Alex", "Maxim", "Andrey"},
            {"Christian", "Robert", "Batyr"},
            {"Alizhan", "Miras", "Egor"}
        };
         cout<< "This is the game where you must find all KAZAKH NAMES"<<endl<<"Start from left to right side"<<endl<<"Write all names in their written way or your answer will not be accepted"<<endl;

       do{
        cin>>writename;
        if(found == 0 && writename == Names[1][2]  ){
           found++;
            cout<<"Good job! 2 more Names."<<endl<<"Alex, Maxim, Andrey"<<endl<<"Christian, Robert, -----"<<endl<<"Alizhan, Miras, Egor"<<endl;
        }
        else if(found == 1 && writename == Names[2][0]  ){
            found++;
            cout<<"Well done! 1 more Names."<<endl<<"Alex, Maxim, Andrey"<<endl<<"Christian, Robert, -----"<<endl<<"-------, Miras, Egor"<<endl;

        }
        else if(found == 2 && writename == Names[2][1] ){
        found++;
        cout<<"Congrats! You have found all the names"<<endl;
        }
        else{
            cout<<"Wrong answer! Try again"<<endl;
        }

    }while (found<3);
        
        return 0;
    
        }
