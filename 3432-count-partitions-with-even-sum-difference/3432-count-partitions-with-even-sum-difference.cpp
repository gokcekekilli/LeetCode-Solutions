class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        vector<int> r;
        for (int i=0;i<nums.size();i++) {
            sum+=nums[i];
            r.push_back(sum);
        }
        int cnt =0;
        for (int i=0;i<r.size()-1;i++) {
            if (abs(sum - 2*r[i])%2==0) {
                cnt ++;
            }
        }
        
        return cnt;
    }
};