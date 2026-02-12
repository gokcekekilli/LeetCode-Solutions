class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp1;
        map<char,int>mp2;
        for (char c:s) {
            if (c=='a' || c=='e'  || c=='i' || c=='u'  || c=='o' ) {
                mp1[c]++;
            }
            else {
                mp2[c]++;
            }
        }
        int max1 = 0;
        for (auto& pair:mp1) {
            if (max1 < pair.second) {
                max1 = pair.second;
            }
        }
        int max2 = 0;
        for (auto& pair:mp2) {
            if (max2 < pair.second) {
                max2 = pair.second;
            }
        }
        return max1+max2;
        
    }
};