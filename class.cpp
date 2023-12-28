#include<iostream>
using namespace std;
int pow(int basenum, int pownum){
    int result;
    result=1;
    for(int i=0; i<pownum; i++){
        result*=basenum;
        
    }
    return result;
}
int main()
{
    int a=pow(4,3);
    cout<<a<<endl;
    return 0;
    
}
//finding any power of any number witout cmath file!