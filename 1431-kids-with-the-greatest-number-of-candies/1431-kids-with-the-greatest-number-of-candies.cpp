class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> r;
        for (int i=0;i<candies.size();i++) {
            if (max < candies[i]) max = candies[i];
        }
        for (int i=0;i<candies.size();i++) {
            if (candies[i]+extraCandies >= max) {
                r.push_back(true);
                
            }
            else {
                r.push_back(false);
            }
        }
        return r;
    }
};