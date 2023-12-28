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
    int test;
    cin>>test;
    while(test--){
        long long int a,b;
        int p=2;
        cin>>a>>b;
        cout<<10*pow(a,p)<<" | "<<10*pow(b,p)<<"\n";
        
        
    }

}