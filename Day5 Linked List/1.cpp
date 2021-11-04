//Author:Sahil Anand
//Problem Link: https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* dummyNode=NULL;
        while(head!=NULL){
            ListNode* nxt = head->next;
            head->next = dummyNode;
            dummyNode = head;
            head = nxt;
        }
        return dummyNode;
    }
};