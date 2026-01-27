class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for (int i=0;i<nums.size()-1;i++)
        {
            int minIndex = i;
            for (int j=i+1;j<nums.size();j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            std::swap(nums[minIndex],nums[i]);
        }
        return nums;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> newNums = selectionSort(nums);
        vector<int> r;
        for (int i=0;i<newNums.size();i++)
        {
            if (newNums[i] == target) {
                r.push_back(i);
            }
        }
        return r;
        
    }
};