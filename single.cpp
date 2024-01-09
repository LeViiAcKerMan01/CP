class Solution{
    public:
    int singleNumber(vector<int>& nums){
        int size=nums.size();
        if(size==1) return nums[0];
        if(size==0) return -1;

        unordered_set<int> s;
        for(int i:nums){
            while(s.find(i)!=s.end()){
                s.erase(i);
        }
        else{
            s.insert(i);
        }
        }
        for(int i: s){
            return i;

        }
        return -1;
    }
};