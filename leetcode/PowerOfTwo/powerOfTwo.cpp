class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0; i<35; i++){
        long int ans=pow(2,i);
        if(ans==n){
            return true;
        }
        }
        return false;
        
    }
};