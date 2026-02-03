class Solution {
public:
    void testing(vector<int>& v,int index,int& count) {
        if (v[index] == 0) return;
        if (v[index]>0) count++;
        for (int i=index+1;i<v.size();i++) {
            if (v[i]>0) {
                v[i]--;
            }
        }
        
    }
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count =0;
        for (int i=0;i<batteryPercentages.size();i++) {
            testing(batteryPercentages,i,count);
        }
        return count;
        
    }
};