class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int right = 0;right<nums.size();right++){
            if(nums[right] != 0){
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                left++;
            }
        }
    }
};