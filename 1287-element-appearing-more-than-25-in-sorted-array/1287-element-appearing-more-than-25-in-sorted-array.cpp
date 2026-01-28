class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        double frequence = (double)arr.size() /4;
        for (int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for (auto& pair:mp) {
            if (pair.second>frequence) {
                return pair.first;
            }
        }
        return -1;
        
    }
};