class Solution {
public:
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> mp;
        for (int i=0;i<allowed.size();i++) {
            mp[allowed[i]]++;
        }
        int cnt=0;
        for (int i=0;i<words.size();i++) {
            bool found = true;
            for (int j=0;j<words[i].size();j++) {
                if (mp[words[i][j]] == 0) {
                    found = false;
                    break;
                }
            }
            if (found) cnt++;
        }
        return cnt;
        
    }
};