/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        if (!head) return 0;
        vector<int> r;
        ListNode* curr = head;
        while (curr) {
            r.push_back(curr->val);
            curr = curr -> next;
        }
        int n = r.size();
        int maxSum = 0;
        for (int i=0;i<=n/2-1;i++) {
            if (r[i]+r[n-1-i] > maxSum) maxSum = r[i]+r[n-1-i];
        }
        return maxSum;
    }
};