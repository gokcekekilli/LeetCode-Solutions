class Solution {
public:
    int op(string s) {
        for (char c:s) {
            if (c=='+') return 1;
            if (c=='-') return -1;
        }
        return 0;
    }
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        for (string s:operations) {
            sum+=op(s);
        }
        return sum;
        
    }
};