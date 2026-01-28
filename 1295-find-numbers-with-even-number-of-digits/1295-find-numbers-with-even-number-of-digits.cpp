class Solution {
public:
    int digitNumber(int n) {
        int cnt = 0;
        while (n>0) {
            n/=10;
            cnt++;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i=0;i<nums.size();i++) {
            if (digitNumber(nums[i]) % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
        
    }
};