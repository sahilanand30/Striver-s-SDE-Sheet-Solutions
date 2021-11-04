//Author:Sahil Anand
//Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N=0; //N is size of LL
        ListNode* ptr=head;
        while(ptr!=NULL){
            N++;
            ptr=ptr->next;
        }
        if(N==1) return NULL;
        else if(N==n){
            ListNode* q = head;
            head = head->next;
            return head;
        }
        int before_index = N-n;
        int ct=1;
        ListNode* p = head;
        while(ct!=before_index && p!=NULL){
            ct++;
            p=p->next;
        }
        ListNode* dump = p->next;
        p->next = p->next->next;
        return head;
        
    }
};