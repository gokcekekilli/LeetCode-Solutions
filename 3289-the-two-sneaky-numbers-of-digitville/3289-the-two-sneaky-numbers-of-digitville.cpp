class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        map<int,int>mp;
        for (int n:nums) {
            mp[n]++;
        }
        for (auto& pair:mp) {
            if (pair.second == 2) result.push_back(pair.first);
        }
        return result;
    }
};