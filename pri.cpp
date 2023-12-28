#include<bits/stdc++.h>
using namespace std;
void getMax(int a, int b, int c){
    if(a>b && a>c){
        cout<<a<<" is greater than "<<b<<"and"<<c<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is greater than "<<a<<" and "<<c<<endl;

    }
    else{
        cout<<c<<" is greater than "<<a<<" and "<<c<<endl;
    }
}
    
    int main(){
    #ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
    #endif
   
    int a;
    int b;
    int c;
    int d;
    cin>>d;
    while(d--){
   
    cin>>a>>b>>c;
    getMax(a,b,c);
    }
   
    

    return 0;


}