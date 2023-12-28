#include<iostream>
using namespace std;
int pow(int basenum, int pownum){
    int result=1;
    for(int i=0; i<pownum; i++){
    result*=basenum;
    }
    return result;
}
int main()
{
    int b=pow(8,3);
    cout<<b<<endl;
    return 0;
}