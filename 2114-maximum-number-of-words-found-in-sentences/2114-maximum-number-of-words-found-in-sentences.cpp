class Solution {
public:
    int count(string s) {
        int cnt = 0;
        for (char c: s) {
            if (c==' ') {
                cnt++;
            }
        }
        return cnt+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxNum = 0;
        for (int i=0;i<sentences.size();i++) {
            int cnt = count(sentences[i]);
            if (cnt>maxNum) maxNum = cnt;
        }
        return maxNum;
    }
};