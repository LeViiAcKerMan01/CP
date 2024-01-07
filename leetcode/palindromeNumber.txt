class Solution {
public:

    bool isPalindrome(int x) {
        if(x<0) return false;
        else if(x<10) return true;
        else if(x==10 || x==100 || x==1000 || x==10000) return false;
        long long y, t=x;
        while(t!=0){
            y=y*10+t%10;
            t/=10;
        }
        return x==y;  
    }
};