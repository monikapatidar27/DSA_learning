class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v(2);
        map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            if(mpp.find(target -nums[i]) != mpp.end()){
                v[0]=mpp[target - nums[i]];
                v[1]= i;
            }
            mpp[nums[i]]=i;
        } 
        return v;
    }
};