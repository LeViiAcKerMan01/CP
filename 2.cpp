#include<bits/stdc++.h>
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGEs
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif
    int a[26];
    int i;
    int t;
    int sum;
    int d;

    for(int i=0; i<26; i++){
        cin>>a[i];
    }
    for(i=25;i>=0;i--){
        cout<<a[i];
        cout<<"\t";

    }
    return 0;
    

}