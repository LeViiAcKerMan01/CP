#include<bits/stdc++.h>
using namespace std;

int print_pattern(int n, int m){
   
    cout<<" "<<" "<<" "<<n<<m<<" "<<" "<<" "<<endl;
    cout<<" "<<" "<<n<<n<<m<<m<<endl;
    cout<<" "<<n<<n<<n<<m<<m<<m<<endl;
    
    

}
int main()
{
        #ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
    int t;
    int n;
    int m;
    cin>>t;
    
    while(t--){
    cin>>n>>m;
    print_pattern(n,m);
    }
    

}