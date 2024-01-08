#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
int a;
int b;
int test;
cin>>test;
for(int i=0; i<test; i++){
cout<<"Enter no.:";
cin>>a>>b;
cout<<"Number entered is :"<<a<<" " <<b<<" ";

int c=pow(a,b);
cout<<c<<"\n";
}

return 0;
}