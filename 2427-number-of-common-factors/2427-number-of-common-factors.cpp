class Solution {
public:
    int countofdivisors(int n) {
        if (n == 1 ) return 1;
        int cnt = 1;
        for (int i=1;i<=n/2;i++) {
            if (n%i == 0) cnt++;
        }
        return cnt;
    }
    int gcd(int a, int b) {
        if (b==0) return a;
        return gcd(b,a%b);

    }
    int commonFactors(int a, int b) {
        int num = gcd(a,b);
        return countofdivisors(num);



        
    }
};