class Solution {
public:
    int sumofdigits(int n) {
        int sum = 0;
        while (n>0) {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = sumofdigits(x);
        return (x%n==0) ? n : -1;

        
    }
};