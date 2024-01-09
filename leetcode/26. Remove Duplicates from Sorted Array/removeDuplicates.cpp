class Solution{
    public:
    int returnDuplicates(vector<int>& nums){
        int i=1;
        int j=1;
        if(nums.size()==0) return 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){

                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
}