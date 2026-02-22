class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v1;
        vector<int> v2;
        int k = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] <  pivot) {
                v1.push_back(nums[i]);
            } 
            else if (nums[i] ==  pivot) {
                k++;
            }
            else {
                v2.push_back(nums[i]);
            }
        }
        while (k>0) {
            v1.push_back(pivot);
            k--;
        }
        for (int i=0;i<v2.size();i++) {
            v1.push_back(v2[i]);
        }
        return v1;
    }
};