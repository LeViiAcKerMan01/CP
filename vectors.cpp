#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a(10,100);
   
   for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";

   }
   cout<<endl;

   a.push_back(25);
   a.push_back(92);
   a.push_back(24);

   for(int i=10; i<a.size(); i++){
    cout<<a[i]<<" ";
   }

   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();
   a.pop_back();

   cout<<endl;
   
   for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
   }

   cout<<endl;
   
   a.push_back(92);
   a.push_back(23);
   a.push_back(29);

   for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
   }









    return 0;
}