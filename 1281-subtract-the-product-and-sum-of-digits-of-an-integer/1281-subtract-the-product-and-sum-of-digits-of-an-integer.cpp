class Solution {
public:
    int product(int n) {
        int mult = 1;
        while (n>0) {
            mult*=n%10;
            n/=10;
        }
        return mult;
    }
    int sum(int n) {
        int sum = 0;
        while (n>0) {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int subtractProductAndSum(int n) {
        return product(n)-sum(n);
        
    }
};