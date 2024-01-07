#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=s.size();
    int i;
    for(int i=size-1; i>=0; i--){
        cout<<s[i];
    }
    return 0;
}