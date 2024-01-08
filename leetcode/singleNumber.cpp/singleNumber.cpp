class Solution{
    public:
    int singleNumber(vector<int>& nums){ 
        if(nums.size()==1) return nums[0];
        
        unordered_set<int> s;
        
        for(int i: nums){
            if(s.find(i)!=s.end()){
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
}