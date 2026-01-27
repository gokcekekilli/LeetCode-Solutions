class Solution {
public:
    int minNum(vector<int>& nums) {
        int minimum = 1001;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i] < minimum)
            {
                minimum = nums[i];
            }
        }
        return minimum;
    }
    int count(vector<int>& nums, int num) {
        int cnt = 0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i] >= num)
            {
                cnt++;
            }
            
        }
        return cnt;
    }
    int specialArray(vector<int>& nums) {
        int minimum = minNum(nums);
        int k=0;
        int minimum1 = minimum;
        while (k<1000) {
            if (count(nums,minimum1) == minimum1)
            {
                return minimum1;
            }
            minimum1++;
            k++;
        }
        int j=0;
        int minimum2 = minimum;
        while (j<1000) {
            if (count(nums,minimum2) == minimum2)
            {
                return minimum2;
            }
            minimum2--;
            j++;
        }
        return -1;
        
        
    }
};