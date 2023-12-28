#include<iostream>
using namespace std;
int main()
{
    int twoD[3][3]={{1,2,1},{3,4,2},{5,6,3}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<twoD[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}