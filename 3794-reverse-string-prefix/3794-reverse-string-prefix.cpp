class Solution {
public:
    string reversePrefix(string s, int k) {
        string my_s = s;
        for (int i=0;i<k;i++) {
            my_s[i] = s[k-i-1];
        }
        return my_s;
        
    }
};