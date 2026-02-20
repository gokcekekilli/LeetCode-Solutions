class Solution {
public:
    int calcLeft(vector<int>& nums,int index) {
        int sum = 0;
        for (int i=0;i<index;i++) {
            sum+=nums[i];
        }
        return sum;

    }
    int calcRight(vector<int>& nums,int index) {
        int sum = 0;
        for (int i=index+1;i<nums.size();i++) {
            sum+=nums[i];
        }
        return sum;

    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> r;
        for (int i=0;i<nums.size();i++) {
            r.push_back(abs(calcLeft(nums,i) - calcRight(nums,i)));;
            
        }
        return r;
        
    }
};