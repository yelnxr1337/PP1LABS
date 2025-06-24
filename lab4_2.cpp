#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    for(int i = 0; i<10; i++){
        int q;
        cin>>q;
        s.insert(q);
    }
    
    for (int i: s){
        cout<<i<<" ";
    }
    
    cout<<'\n';
    cout<<"target: ";
    
    int q;
    cin>>q;
    if (s.find(q) != s.end()) {
        cout << q<<" is in the set\n";
        
        
    } else {
        cout << q<<"is NOT in the set\n";
    }
}
