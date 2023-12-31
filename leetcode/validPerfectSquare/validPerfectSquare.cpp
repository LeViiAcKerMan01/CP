class Solution {
public:
    bool isPerfectSquare(int num) {
        vector<long long int>v;
        long long int i;
        for(long long int i=0; i<50000; i++){
            v.push_back(i);
        }
        for(long long int i=0; i<50000; i++){
            if(v[i]*v[i]==num){
                return true;
            }
        }
        return false;
        
    }
};