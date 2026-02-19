class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> r;
        for (int i=0;i<nums.size();i++) {
            r.push_back(nums[i]);
        }
        for (int i=0;i<nums.size();i++) {
            r.push_back(nums[i]);
        }
        return r;
    }
};