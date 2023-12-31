#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="A Code Daily";
    a.push_back('A');
    a.pop_back();
    cout<<a<<endl;
    for(int i=0; i<(a.size()); i++){
        cout<<a[i]<<" ";
    }
    return 0;


}