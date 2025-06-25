#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>mp;
    string str = "This is a test this is only a test";
    stringstream ss(str);
    string s;

    while (ss >> s) {
        mp[s]++;
    }
    
    for(map<string, int>::iterator it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<"->"<<it->second<<'\n';
    }
}
