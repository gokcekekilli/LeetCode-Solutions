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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* last = list1;
        int k = 0;
        while (k<b+1) {
            last = last -> next;
            k++;
        }
        ListNode* curr = list1;
        for (int i=1;i<a;i++) {
            curr = curr -> next;
        }   
        curr ->next = list2;
        while (curr ->next) {
            curr = curr -> next;
        } 
        curr -> next = last;
        return list1;
    }

};