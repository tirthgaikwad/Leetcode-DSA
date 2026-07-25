class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0; int sum = INT_MIN;

        for(int var : nums){
            curr += var;
            sum = max(curr,sum);
            if(curr < 0){
                curr = 0;
            }
        }
        return sum;
    }
};