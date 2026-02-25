class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int index = 1;
        for (char c:s) {
            sum+= index*('a'-c+26);
            index++;
        }
        return sum;
        
    }
};