#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int val=0; 
    for(int i=0; i<10; i++){
        
        v.push_back(i);
        
    }
    for(int i=9; i>=0; i--){
        cout<<v[i]<<" ";

    }
    return 0;
}
//taking input inside vectors and then printing them in a reverse fashion!