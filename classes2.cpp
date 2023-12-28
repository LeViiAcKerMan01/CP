#include<iostream>
using namespace std;
int main()
{
    int a[2][3][2]={
        {{2,3},{5,6},{3,5}},
        {{3,4},{5,6},{1,2}}
    };
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<2; k++){
                cout<<a[i][j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}