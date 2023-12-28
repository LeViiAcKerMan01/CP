#include<bits/stdc++.h>

using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif
    string s;
    cin>>s;
    int l=s.length();
    int i; 
    int n;


    for(i=l-1; i>=0; i--){
    cout<<s[i];

    }
    return 0;
}