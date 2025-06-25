#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    vector<int>v;
    for(int i = 0; i<10; i++){
        int q;
        q = rand() % 101;
        v.push_back(q);
    }
    cout<<"vector: ";
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    sort(v.begin(), v.end());
    
    cout<<"sorted vector: ";
    
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    int min_0 = INT_MAX;
    int max_0 = INT_MIN;
    
    for(int i : v){
        if(i<min_0){
            min_0 = i;
        }
        else if(i>max_0){
            max_0 = i;
        }
    }
    
    cout<<"max: "<<max_0<<endl;
    cout<<"min: "<<min_0<<endl;
    
    
    v.erase(unique(v.begin(), v.end()), v.end());
    
    
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}
