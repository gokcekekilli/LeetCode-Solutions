class Solution {
public:
    int mirrorDistance(int n) {
        int num = n;
        int result = 0;
        vector<int> v;
        while (num>0) {
            v.push_back(num%10);
            num/=10;
        }
        for (int i=0;i<v.size();i++) {
            result*=10;
            result+=v[i];
            
        }
        return abs(result-n);
    }
};