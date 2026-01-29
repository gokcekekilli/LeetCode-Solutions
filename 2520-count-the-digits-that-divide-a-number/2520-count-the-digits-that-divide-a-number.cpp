class Solution {
public:
    vector<int> digits(int n) {
        vector<int> result;
        while (n>0) {
            result.push_back(n%10);
            n/=10;
        }
        return result;
    }
    int countDigits(int num) {
        int cnt = 0;
        vector<int> r=digits(num);
        for (int i=0;i<r.size();i++)
        {
            if (r[i] != 0 && num % r[i]==0) {
                cnt++;
            }
        }
        return cnt;
        
    }
};