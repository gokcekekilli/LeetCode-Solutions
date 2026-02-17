class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        for (int i=0;i<v.size();i++) {
            v[i]=nums[nums[i]];
        }
        return v;
    }
};