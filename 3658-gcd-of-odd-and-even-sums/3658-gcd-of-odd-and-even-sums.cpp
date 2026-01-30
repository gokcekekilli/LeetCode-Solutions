class Solution {
public:
    int gcd(int a, int b) {
        if (b!=0) return gcd(b,a%b);
        else return a;
    }
    int gcdOfOddEvenSums(int n) {
        int evenSum = n*(n+1);
        int oddSum = 2*n*(2*n+1)/2 - evenSum;
        return gcd(evenSum, oddSum);

        
    }
};