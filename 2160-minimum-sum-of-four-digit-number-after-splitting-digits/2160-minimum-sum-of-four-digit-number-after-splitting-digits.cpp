class Solution {
public:
    int minimumSum(int num) {
        vector<int>n;
        for (int i=0;i<4;i++)
        {
            n.push_back(num%10);
            num/=10;
        }
        sort(n.begin(), n.end());
        int num1 = 10*n[0]+n[2];
        int num2= 10*n[1]+n[3];
        return num1+num2;
        
    }
};