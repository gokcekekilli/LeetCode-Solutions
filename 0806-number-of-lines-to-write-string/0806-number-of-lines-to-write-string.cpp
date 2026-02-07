class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> r;
        int cnt = 0;
        int sum = 0;
        int i = 0;
        while (i<s.size()) {
            if (sum + widths[s[i]-'a'] > 100) {
                cnt++;
                sum = widths[s[i]-'a'];
            }
            else {
                sum += widths[s[i]-'a'];
            }
            i++;
        }
        r.push_back(cnt+1);
        r.push_back(sum);
        return r;
        
    }
};