class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            for(int j= i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    nums[0] = i;
                    nums[1] = j;
                    return {i,j};
                }
            }
        }
        return {};
    }
};