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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr) return head;
        ListNode* front = head->next;
        ListNode* back = head;
        int k=0;
        while (front) {
            ListNode* mid = new ListNode(gcd(front->val,back->val));
            back -> next = mid;
            mid -> next = front;
            front = front -> next;
            back = back -> next->next;
            k++;
        }
        return head;
        
    }
};