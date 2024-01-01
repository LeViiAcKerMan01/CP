vector<int> twoSum(vector<int>& nums, int target){
    vector<int> a;
    int size=nums.size();

    for(int i=0; i<(size-1); i++){
        for(int j=(i+1); j<size; j++){
            if(nums[i]+nums[j]==target){
                a.push_back(i);
                a.push_back(j);
                return a;
            }
        }
    }
    return a;
}