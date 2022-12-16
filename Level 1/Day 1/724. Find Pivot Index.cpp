class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       for(int i = 0;i<nums.size();i++){
           int pivot = i;
           int suml = 0, sumr = 0;
           for(int j = 0;j<pivot;j++){
               suml = suml + nums[j];
           }
           for(int k = pivot+1;k<nums.size();k++){
               sumr = sumr + nums[k];
           }
           if(suml == sumr){
           return pivot;
           }
       }
       return -1;
    }
};
