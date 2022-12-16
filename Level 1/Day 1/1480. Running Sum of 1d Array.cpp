class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> output;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum = sum + nums[i];
            output.push_back(sum);
        }
        return output;
    }
};
