class Solution {
public:
    vector<string> words(string s1) {
        vector<string> v;
        int start =0;
        int end = start;
        while (end < s1.size()) {
            if (s1[end] == ' ') {
                string word = s1.substr(start,end-start);
                v.push_back(word);
                start = end+1;
                end = start;
            }
            end++;
        }
        string word = s1.substr(start,end-start);
        v.push_back(word);
        return v;
        
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v1 = words(s1);
        vector<string> v2 = words(s2);
        vector<string> v;
        map<string,int>mp;
        for (int i=0;i<v1.size();i++) {
            bool found = false;
            for (int j=0;j<v2.size();j++) {
                if (v1[i] == v2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) mp[v1[i]]++;
        }
        map<string,int>mp2;
        
        for (int i=0;i<v2.size();i++) {
            bool found2=false;
            for (int j=0;j<v1.size();j++) {
                if (v2[i] == v1[j]) {
                    found2 = true;
                    break;
                }
            }
            if (!found2) mp2[v2[i]]++;
        }
        for (auto& pair:mp) {
            if (pair.second == 1) v.push_back(pair.first);
        }
        for (auto& pair2:mp2) {
            if (pair2.second == 1) v.push_back(pair2.first);
        }
        return v;
        
    }
};