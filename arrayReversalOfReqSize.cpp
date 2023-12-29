#include<iostream>
using namespace std;
int main()
{
   /* #ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif */
    int n;
    int a[1000];
    int i;
    int sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0; i--){
        sum+=a[i];
        

    }
    cout<<sum<<endl;
    return 0;


}