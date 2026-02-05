class Solution {
public:
    int smallestNumber(int n) {
        int j=1;
        int k = 1;
        while (k<n) {
            k+=pow(2,j);
            j++;
        }
        return k;
        
    }
};