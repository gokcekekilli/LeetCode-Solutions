class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        std::set<int> visited;
        map<int,int> starts;
        map<int,int> ends;
        for (int i=0;i<nums.size();i++) {
            int num = nums[i];
            if (!visited.contains(num)) {
                visited.insert(num);
                starts[num] = i;
                ends[num] = i;
            }
            else {
                ends[num] = i;
            }
             
        }
        map<int,int> mp;
        for (int n:nums) {
            mp[n]++;
        }
        int count = 0;
        for (auto& pair:mp) {
            int freq = ends[pair.first]-starts[pair.first]+1;
            if (freq == pair.second) {
                count++;
            }
        }
        return count;

        
    }
};