#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int a;
    int b;
    cin>>a>>b;
    v.push_back(a);
    v.push_back(b);
    reverse(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";

    }
    return 0;

}