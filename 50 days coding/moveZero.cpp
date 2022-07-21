class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        for(int k=0;k<nums.size();k++){
            if(nums[j] == 0){
                j++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
    }
};