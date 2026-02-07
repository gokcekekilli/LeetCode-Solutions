class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int max = 0;
        for (int i:gain) {
            sum += i;
            if (sum > max) {
                max = sum;
            }
        }
        return max;
    }
};